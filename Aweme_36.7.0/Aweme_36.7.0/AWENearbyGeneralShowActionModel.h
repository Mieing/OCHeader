@class NSString, NSNumber;

@interface AWENearbyGeneralShowActionModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *actionParam;
@property (retain, nonatomic) NSNumber *pollingLimit;
@property (retain, nonatomic) NSNumber *pollingInterval;
@property (copy, nonatomic) NSString *actionApiUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
