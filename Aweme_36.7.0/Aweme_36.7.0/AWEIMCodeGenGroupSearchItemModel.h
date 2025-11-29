@class NSString, NSArray, NSDictionary;

@interface AWEIMCodeGenGroupSearchItemModel : AWEBaseDataModel

@property (nonatomic) long long groupid;
@property (copy, nonatomic) NSString *groupstrid;
@property (nonatomic) int checkcode;
@property (copy, nonatomic) NSString *groupname;
@property (copy, nonatomic) NSString *groupnumber;
@property (copy, nonatomic) NSString *avataruri;
@property (nonatomic) int groupmembercount;
@property (copy, nonatomic) NSString *descriptionString;
@property (copy, nonatomic) NSString *entrylimitshortdescription;
@property (copy, nonatomic) NSArray *tagsArray;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSDictionary *itemextra;
@property (copy, nonatomic) NSDictionary *trackingext;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
