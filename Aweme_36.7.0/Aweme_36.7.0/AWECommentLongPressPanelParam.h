@class AWECommentModel, NSString, NSDictionary, AWEPageContext, AWEAwemeModel;
@protocol AWECommentGeneralModelProtocol, AWECommentTrackingModelProtocol;

@interface AWECommentLongPressPanelParam : NSObject

@property (weak, nonatomic) AWEPageContext *preNode;
@property (weak, nonatomic) AWECommentModel *selectdComment;
@property (weak, nonatomic) AWECommentModel *mainComment;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) id<AWECommentGeneralModelProtocol> generalModel;
@property (retain, nonatomic) id<AWECommentTrackingModelProtocol> commentTrackingModel;
@property (nonatomic) long long index;
@property (nonatomic) long long section;
@property (nonatomic) BOOL isLandScape;
@property (copy, nonatomic) NSString *eventSource;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
