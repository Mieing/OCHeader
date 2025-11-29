@class NSString, NSArray;

@interface IESECShopActivityMultiMarqueeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSArray *avatars;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
