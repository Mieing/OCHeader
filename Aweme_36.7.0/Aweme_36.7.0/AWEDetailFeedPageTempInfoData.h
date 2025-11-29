@class AWEAwemeNewDetailControllerManager, NSDictionary, UIView, AWECommentRequestExtraModel;
@protocol AFDSpeedManagerProtocol;

@interface AWEDetailFeedPageTempInfoData : NSObject

@property (retain, nonatomic) AWECommentRequestExtraModel *commentRequestExtraModel;
@property (retain, nonatomic) NSDictionary *detailContext;
@property (retain, nonatomic) NSDictionary *feedExtraParams;
@property (retain, nonatomic) id<AFDSpeedManagerProtocol> speedManager;
@property (nonatomic) BOOL isFromEcomMall;
@property (retain, nonatomic) AWEAwemeNewDetailControllerManager *controllerManager;
@property (retain, nonatomic) UIView *operationViewForAdOperationView;

- (void).cxx_destruct;

@end
