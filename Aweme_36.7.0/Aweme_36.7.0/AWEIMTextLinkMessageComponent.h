@class NSString;

@interface AWEIMTextLinkMessageComponent : AWEIMFlexComponent <AWEIMMessageContentInterface>

@property (nonatomic) long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;

- (void)componentDidMounted:(id)a0;
- (void)cellWillDisplay:(unsigned long long)a0;
- (void)p_createPresenterIfNeed;
- (void)p_setupMessage;
- (id)p_attributedStringForMsg:(id)a0;
- (void)p_handleJumpUserProfileActionIfNeeded:(id)a0 tappedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)displayMessage;

@end
