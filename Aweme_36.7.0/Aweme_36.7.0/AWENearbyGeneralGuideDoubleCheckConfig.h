@class NSString;

@interface AWENearbyGeneralGuideDoubleCheckConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long doubleCheckEnable;
@property (copy, nonatomic) NSString *doubleCheckUrl;
@property (copy, nonatomic) NSString *doubleCheckParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
