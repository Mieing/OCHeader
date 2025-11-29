@class NSString;

@interface AWEDTOInspirationFollowModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *afflatusId;
@property (copy, nonatomic) NSString *afflatusAisupportResult;
@property (nonatomic) BOOL isAisupportAuto;
@property (nonatomic) BOOL isAfflatusAisupport;
@property (copy, nonatomic) NSString *autoShootingDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
