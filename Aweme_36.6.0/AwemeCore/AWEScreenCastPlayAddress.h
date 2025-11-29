@class NSString, NSDictionary;

@interface AWEScreenCastPlayAddress : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *playUrl;
@property (copy, nonatomic) NSString *playBackUrl;
@property (copy, nonatomic) NSString *logoType;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) double expiredTime;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
