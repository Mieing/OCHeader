@class NSString;

@interface IESIMFansGroupGuestOpenCapabilityModel : IESIMGroupOpenCapabilityModel

@property (copy, nonatomic) NSString *fromUserName;
@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *fromUserSecUid;
@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *searchParams;
@property (copy, nonatomic) NSString *joinGroupTrackParams;

+ (id)optionalPropertyNameSet;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
