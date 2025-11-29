@class NSNumber, NSString;

@interface AWEGrouponLiveWindowModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *liveSchema;
@property (nonatomic) long long stayWhenHalfClose;
@property (nonatomic) unsigned long long showScene;
@property (nonatomic) float windowTopPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)roomIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
