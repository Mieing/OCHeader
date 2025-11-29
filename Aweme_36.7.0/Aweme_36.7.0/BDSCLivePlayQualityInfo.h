@class NSString;

@interface BDSCLivePlayQualityInfo : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sdkKey;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *vCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
