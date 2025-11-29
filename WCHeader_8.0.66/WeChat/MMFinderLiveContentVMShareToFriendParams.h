@class WCFinderLiveShareExtraParams;
@protocol ForwardMessageLogicDelegate;

@interface MMFinderLiveContentVMShareToFriendParams : NSObject

@property (retain, nonatomic) id<ForwardMessageLogicDelegate> delegate;
@property (retain, nonatomic) WCFinderLiveShareExtraParams *extra;
@property (nonatomic) BOOL usePageSheet;
@property (nonatomic) BOOL chatRoomOnly;
@property (nonatomic) long long shareScene;

- (void).cxx_destruct;

@end
