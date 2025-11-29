@class NSString;

@interface AWEIMFriendSubInfoDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *statusType;
@property (retain, nonatomic) NSString *iconText;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) long long iconType;
@property (nonatomic) long long jumpType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
