@class NSArray, NSString;

@interface AWEMVAlgorithmConfig : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *imagPath;
@property (copy, nonatomic) NSString *algorithmName;
@property (nonatomic) BOOL needServerExcute;
@property (copy, nonatomic) NSString *algorithmParamJson;
@property (nonatomic) unsigned long long algorithmResultType;
@property (nonatomic) BOOL multiInput;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithVEConfig:(id)a0;
- (void).cxx_destruct;

@end
