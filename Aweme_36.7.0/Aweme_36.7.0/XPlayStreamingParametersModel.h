@class NSString;

@interface XPlayStreamingParametersModel : NSObject <XPlayResolution>

@property (nonatomic, getter=isClarityLevel) BOOL clarityLevel;
@property (nonatomic) long long index;
@property (nonatomic) long long fps;
@property (nonatomic) long long maxKbps;
@property (nonatomic) long long minKbps;
@property (nonatomic) long long resolutionType;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resolutionWithDic:(id)a0;

- (long long)compareResolution:(id)a0;
- (BOOL)isEqualToResolution:(id)a0;
- (void).cxx_destruct;

@end
