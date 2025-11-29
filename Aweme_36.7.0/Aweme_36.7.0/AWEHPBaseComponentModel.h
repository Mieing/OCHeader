@class NSArray, NSString, NSDictionary, NSMutableArray;

@interface AWEHPBaseComponentModel : MTLModel <NSCopying, AWEHPBaseComponentModelProtocol>

@property (copy, nonatomic) NSArray *dynamicStrategies;
@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) NSMutableArray *tabIDStack;
@property (copy, nonatomic) NSDictionary *bizTrackParams;
@property (copy, nonatomic) id /* block */ bizTrackParamsBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
