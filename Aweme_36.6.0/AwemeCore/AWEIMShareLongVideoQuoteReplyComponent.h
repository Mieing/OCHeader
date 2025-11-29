@class NSString;

@interface AWEIMShareLongVideoQuoteReplyComponent : AWEIMFlexComponent <AWEIMFoldMessageAssistanceButtonClickAction, AWEIMMessageContentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scene;

+ (void)didTapQuotedMessage:(id)a0 context:(id)a1;
+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
