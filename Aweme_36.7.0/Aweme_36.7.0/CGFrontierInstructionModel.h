@class NSString, CGFrontierInstructionCommonParams, NSDictionary;

@interface CGFrontierInstructionModel : NSObject <BDModelCustom, NSCoding, NSCopying>

@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *inst;
@property (retain, nonatomic) CGFrontierInstructionCommonParams *comm_param;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *seq;
@property (copy, nonatomic) NSString *session_id;
@property (nonatomic) int service_id;
@property (nonatomic) int method_id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelPropertyBlacklist;
+ (id)modelContainerPropertyGenericClass;
+ (id)instructionWithBuilder:(id)a0;
+ (id)instructionWithJSONDictionary:(id)a0 serviceId:(int)a1 methodId:(int)a2;
+ (id)instructionWithJSONString:(id)a0 serviceId:(int)a1 methodId:(int)a2;

- (id)modelToJSONString;
- (id)modelToJSONObject;
- (id)modelToJSONData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
