@class NSString, AWEURLModel;

@interface AWEIMShareGroupChatScreenShootModel : NSObject

@property (retain, nonatomic) AWEURLModel *groupIconURL;
@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) long long inviterUid;
@property (retain, nonatomic) NSString *inviterSecUid;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *targetGroupID;
@property (retain, nonatomic) NSString *groupCreateType;
@property (nonatomic) long long targetGroupShortID;
@property (nonatomic) long long groupMemberCount;
@property (nonatomic) long long scene;
@property (nonatomic) long long source;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
