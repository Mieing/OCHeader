@class NSString, NSNumber, NSDictionary;

@interface AWEIMGroupChatRouterInviteMemberContext : NSObject <AWEIMGroupChatRouterContext>

@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (nonatomic) unsigned long long disableOption;
@property (nonatomic) BOOL dismissSuperVC;
@property (copy, nonatomic) NSString *confirmButtonTitle;
@property (nonatomic) double panelHeight;
@property (readonly, copy, nonatomic) NSNumber *sourceType;
@property (retain, nonatomic) NSNumber *preferThemeStyle;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleTransferResult:(BOOL)a0 viewController:(id)a1;
- (id)initWithConversationID:(id)a0 sourceType:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;
- (void).cxx_destruct;
- (id)getSchema;

@end
