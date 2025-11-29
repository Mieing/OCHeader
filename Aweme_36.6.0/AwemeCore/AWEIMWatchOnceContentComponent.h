@class NSString;

@interface AWEIMWatchOnceContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (id)fetchQuotedMessageInvisibleStr:(id)a0 isLite:(BOOL)a1 context:(id)a2;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenter;
- (void)p_observeWatchEnd;
- (id)watchOnceMessage;
- (void)p_handleJumpUserProfileActionIfNeeded:(id)a0 tappedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)p_refreshDisplayText;
- (void)p_setupTextMessageTapAction;
- (id)p_iesim_imageDisplayAttributedStringForMsg:(id)a0;
- (id)p_imageDisplayAttributedStringForMsg:(id)a0;
- (id)p_getWatchEndIconWith:(id)a0;
- (id)displayMessage;

@end
