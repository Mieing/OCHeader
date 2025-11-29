@class NSString;

@interface AWESchoolLifePostResultModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *schoolId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
