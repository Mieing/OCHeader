@class NSString, AWEPOIAMapDirectionRoute;

@interface AWEPOIAMapDirectionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSString *count;
@property (retain, nonatomic) AWEPOIAMapDirectionRoute *route;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
