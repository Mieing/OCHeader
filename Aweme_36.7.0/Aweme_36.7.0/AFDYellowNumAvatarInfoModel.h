@class NSString, NSArray, AWEURLModel;

@interface AFDYellowNumAvatarInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (retain, nonatomic) NSArray *itemIDList;
@property (nonatomic) unsigned long long avatarType;
@property (copy, nonatomic) NSString *avatarUserID;
@property (copy, nonatomic) NSString *avatarUserName;
@property (retain, nonatomic) AWEURLModel *userAvatarURL;
@property (copy, nonatomic) NSString *familiarCountContext;
@property (nonatomic) long long colorRingType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
