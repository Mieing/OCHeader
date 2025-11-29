@class NSString;

@interface AWEShareLynxCardInfo : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) BOOL isLynxCard;
@property (readonly, nonatomic) long long cardType;
@property (readonly, copy, nonatomic) NSString *lynxParamsJsonStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
