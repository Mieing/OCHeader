@class NSString;

@interface AWEIMFeedReplyContentComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)enableShowQuotedCover:(id)a0;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)needUpdateDisplayWithContextOptions:(unsigned long long)a0;
- (void)componentDidMounted:(id)a0;
- (id)contentAttributedStringWithMessage:(id)a0;
- (void)handleJumpUserProfileActionIfNeeded:(id)a0 tappedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)contentAttributedStringWithMessageString:(id)a0 str:(id)a1;
- (id)displayMessage;

@end
