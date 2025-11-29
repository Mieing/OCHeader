@class NSString, NSNumber, AWEIMDuetData;

@interface AWEIMSocialParamsRequestModel : NSObject

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSNumber *conversationShortID;
@property (nonatomic) long long conversationType;
@property (copy, nonatomic) NSString *curSecUID;
@property (copy, nonatomic) NSString *curUID;
@property (copy, nonatomic) NSString *senderSecUid;
@property (copy, nonatomic) NSString *senderUid;
@property (retain, nonatomic) AWEIMDuetData *duetData;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *customPanelName;
@property (copy, nonatomic) NSString *effectUgcData;
@property (copy, nonatomic) NSString *slideCategory;
@property (nonatomic) BOOL isFollow;
@property (nonatomic) long long groupMemberCount;
@property (nonatomic) BOOL isDuetEffect;
@property (nonatomic) long long groupCategory;
@property (nonatomic) long long requestType;
@property (nonatomic) long long randomGroupMemberCount;

- (void).cxx_destruct;

@end
