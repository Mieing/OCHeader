@class NSNumber, NSString;

@interface AWEAdADXFrequenceControlModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *timeDimentionFrequence;
@property (retain, nonatomic) NSNumber *customDimentionFrequence;
@property (copy, nonatomic) NSString *customName;
@property (retain, nonatomic) NSNumber *userDimentionFrequence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
