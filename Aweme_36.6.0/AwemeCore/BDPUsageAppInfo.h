@class NSString, BDPUniqueID;

@interface BDPUsageAppInfo : NSObject

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ttid;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *minJSsdkVersion;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *versionType;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long timestamp;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) BDPUniqueID *uniqueId;

+ (id)modelCustomPropertyMapper;
+ (id)defaultVersionType;

- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (void).cxx_destruct;

@end
