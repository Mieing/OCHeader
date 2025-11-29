@class NSString;

@interface ACCDiskCleanStrategyConfig : NSObject <ACCDiskCleanStrategyConfigProtocol>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double interval;
@property (nonatomic) double ttl;
@property (nonatomic) double sizeMax;
@property (nonatomic) double sizeMin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
