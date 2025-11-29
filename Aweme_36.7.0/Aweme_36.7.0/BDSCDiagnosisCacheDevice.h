@class NSString;

@interface BDSCDiagnosisCacheDevice : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *netMask;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelPropertyBlacklist;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
