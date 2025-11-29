@class NSString;

@interface WCFinderTLUnreadModel : NSObject <WCFinderRedDotNotifyExt>

@property (nonatomic) long long unReadMSGCount;
@property (nonatomic) BOOL showPrivateMSGTips;
@property (nonatomic) double topBlankHeight;
@property (nonatomic) BOOL hiddenAllBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getCurMsgBubbleShowStateInfo;
- (id)getCurCommentFailTidArray;
- (void)onFinderNotifyWechatUnreadMentionCountNeedReload;
- (void)onFinderNotifyPrivateMsgTipsChange;

@end
