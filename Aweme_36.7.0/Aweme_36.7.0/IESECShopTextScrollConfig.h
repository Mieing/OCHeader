@class NSString;

@interface IESECShopTextScrollConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *playState;
@property (nonatomic) long long maxLoop;
@property (nonatomic) long long scrollSpeed;
@property (nonatomic) long long scrollEndPause;
@property (nonatomic) long long scrollTimeInterval;
@property (nonatomic) long long scrollStartDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
