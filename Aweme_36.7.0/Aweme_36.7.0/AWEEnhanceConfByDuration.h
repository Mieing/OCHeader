@class NSString;

@interface AWEEnhanceConfByDuration : MTLModel <MTLJSONSerializing>

@property (nonatomic) double startSec;
@property (nonatomic) double endSec;
@property (nonatomic) double goldRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
