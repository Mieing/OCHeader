@class NSString, NSArray, YataEndpointModel, NSMutableDictionary, YataFacadeModel, NSDictionary, YataLinkageModel, NSNumber, YataPatchModel;

@interface YataProtocolModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *clear;
@property (retain, nonatomic) NSNumber *reload;
@property (copy, nonatomic) NSArray *containerItemArray;
@property (retain, nonatomic) NSMutableDictionary *dataDict;
@property (retain, nonatomic) YataFacadeModel *facade;
@property (retain, nonatomic) YataLinkageModel *linkage;
@property (retain, nonatomic) NSDictionary *global;
@property (retain, nonatomic) YataEndpointModel *endPoint;
@property (retain, nonatomic) YataPatchModel *patches;
@property (readonly, nonatomic) BOOL coverFacade;
@property (readonly, nonatomic) BOOL updateWithoutTouchingFacade;
@property (copy, nonatomic) NSString *logID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerItemArrayJSONTransformer;
+ (id)globalJSONTransformer;
+ (id)patchesJSONTransformer;
+ (id)endPointJSONTransformer;
+ (id)facadeJSONTransformer;
+ (id)linkageJSONTransformer;
+ (id)dataDictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)resetOneTimeStatus;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
