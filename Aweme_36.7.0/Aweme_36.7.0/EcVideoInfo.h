@class NSString, EcVideoPlayInfo;

@interface EcVideoInfo : NSObject

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long status;
@property (retain, nonatomic) EcVideoPlayInfo *p360;
@property (retain, nonatomic) EcVideoPlayInfo *p480;
@property (retain, nonatomic) EcVideoPlayInfo *p720;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (double)lastRequestTime;
- (void)setLastRequestTime:(double)a0;
- (id)initWithVideoInfo:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
