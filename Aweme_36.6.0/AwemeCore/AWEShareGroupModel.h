@class NSString, NSDictionary, AWEURLModel;
@protocol IESIMConversationProtocol;

@interface AWEShareGroupModel : NSObject <IESIMShareGroupModelProtocol>

@property (retain, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) AWEURLModel *groupIconURL;
@property (retain, nonatomic) NSString *inviterUid;
@property (retain, nonatomic) NSString *inviterSecUid;
@property (copy, nonatomic) NSString *qrCodeFirstLineText;
@property (copy, nonatomic) NSString *qrCodeSecondLineText;
@property (copy, nonatomic) NSString *groupOwnerUid;
@property (copy, nonatomic) NSString *groupOwnerSecUid;
@property (copy, nonatomic) NSString *groupOwnerNickName;
@property (nonatomic) long long memberCount;
@property (nonatomic) BOOL isInGroup;
@property (nonatomic) BOOL shouldNotShowOnCurrentScreen;
@property (nonatomic) BOOL shieldInnerPush;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupCreateType;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *extraTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *conversationId;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) AWEURLModel *groupIconURL;
@property (retain, nonatomic) NSString *inviterUid;
@property (retain, nonatomic) NSString *inviterSecUid;
@property (copy, nonatomic) NSString *qrCodeFirstLineText;
@property (copy, nonatomic) NSString *qrCodeSecondLineText;
@property (copy, nonatomic) NSString *groupOwnerUid;
@property (copy, nonatomic) NSString *groupOwnerSecUid;
@property (copy, nonatomic) NSString *groupOwnerNickName;
@property (nonatomic) long long memberCount;
@property (nonatomic) BOOL isInGroup;
@property (nonatomic) BOOL shouldNotShowOnCurrentScreen;
@property (nonatomic) BOOL shieldInnerPush;
@property (copy, nonatomic) id /* block */ groupCommandBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupCreateType;
@property (retain, nonatomic) id<IESIMConversationProtocol> conversation;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *extraTrackInfo;

- (void)setImGroupCommandBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
