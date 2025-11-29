@class FinderLivePromoteMsgInfo, UIView;
@protocol MMFinderLiveOperationViewDelegate;

@interface MMFinderLivePromoteDisplayLogicPubbleLifecycleCallbackParameter : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) UIView *promotePubbleView;
@property (readonly, nonatomic) FinderLivePromoteMsgInfo *promoteMsgInfo;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<MMFinderLiveOperationViewDelegate> operationDelegate;

@end
