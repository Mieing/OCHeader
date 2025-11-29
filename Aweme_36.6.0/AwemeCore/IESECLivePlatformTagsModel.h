@class NSArray, NSDictionary, NSIndexSet, NSString, NSNumber;

@interface IESECLivePlatformTagsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double initialLocalTime;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSArray *labelNames;
@property (retain, nonatomic) NSArray *trackNames;
@property (retain, nonatomic) NSArray *eventParams;
@property (retain, nonatomic) NSDictionary *etagParamsDic;
@property (retain, nonatomic) NSArray *etagArray;
@property (readonly, nonatomic) NSNumber *adjustedServerTime;
@property (retain, nonatomic) NSIndexSet *disableShowIndexSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
