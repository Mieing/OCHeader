@class NSArray, NSString, AWEIMSchoolGroupCreateGroupContext, NSError;
@protocol AWEIMGroupChatPanelControllerDelegate;

@interface AWEIMSchoolGroupCreateGroupViewModel : NSObject

@property (copy, nonatomic) NSArray *avatarURLStringList;
@property (copy, nonatomic) NSArray *leftRandomAvatarURLStringList;
@property (copy, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSError *error;
@property (weak, nonatomic) id<AWEIMGroupChatPanelControllerDelegate> groupChatPanelDelegate;
@property (retain, nonatomic) AWEIMSchoolGroupCreateGroupContext *context;
@property (readonly, copy, nonatomic) NSString *idempotentIdentifier;
@property (copy, nonatomic) NSString *inputName;
@property (copy, nonatomic) NSString *avatarURLString;
@property (readonly, copy, nonatomic) NSString *enterFrom;

- (void)createCompletionWithConversationId:(id)a0 error:(id)a1;
- (void)randomAvatarImageURLString;
- (void)prepareAvatarURLStringList;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)viewWillDismiss;

@end
