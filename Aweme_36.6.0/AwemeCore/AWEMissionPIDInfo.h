@class NSString;

@interface AWEMissionPIDInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long PIDType;
@property (retain, nonatomic) NSString *PID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
