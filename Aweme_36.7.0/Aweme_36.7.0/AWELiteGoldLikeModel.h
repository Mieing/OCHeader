@class NSString;

@interface AWELiteGoldLikeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isLeftElementItem;
@property (nonatomic) long long entranceType;
@property (nonatomic) long long tabType;
@property (nonatomic) long long giftType;
@property (nonatomic) long long diggNum;
@property (nonatomic) BOOL userDigged;
@property (nonatomic) long long userDiggNum;
@property (nonatomic) long long userDiggAmount;
@property (nonatomic) long long onceDiggAmount;
@property (copy, nonatomic) NSString *itemToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
