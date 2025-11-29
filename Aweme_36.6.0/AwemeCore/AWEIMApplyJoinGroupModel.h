@class AWEIMUser, NSString, NSArray, NSDictionary;

@interface AWEIMApplyJoinGroupModel : NSObject

@property (nonatomic) long long applyID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *conversationShortID;
@property (nonatomic) int conversationType;
@property (nonatomic) long long status;
@property (nonatomic) long long createdAt;
@property (copy, nonatomic) NSString *modifyUserID;
@property (nonatomic) long long modifiedAt;
@property (retain, nonatomic) AWEIMUser *user;
@property (copy, nonatomic) NSArray *fansTags;
@property (copy, nonatomic) NSString *fansTagsTrackingValue;
@property (copy, nonatomic) NSString *auditBottomTag;
@property (nonatomic) long long auditBottomTagType;
@property (copy, nonatomic) NSString *auditBottomTagSchema;
@property (copy, nonatomic) NSDictionary *ext;
@property (nonatomic) BOOL trackFlag;

- (id)initWithTTApplyModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isBot;

@end
