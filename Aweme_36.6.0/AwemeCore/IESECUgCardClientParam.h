@class NSDictionary, NSString;

@interface IESECUgCardClientParam : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSDictionary *firstResponse;
@property (copy, nonatomic) NSDictionary *extraRequestParams;
@property (copy, nonatomic) NSString *backgroundColor;
@property (nonatomic) long long clientDelayTime;
@property (nonatomic) BOOL needAnim;
@property (nonatomic) BOOL needGradient;
@property (copy, nonatomic) NSString *sourceBtm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
