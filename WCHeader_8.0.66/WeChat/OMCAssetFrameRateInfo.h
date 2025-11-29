@interface OMCAssetFrameRateInfo : NSObject

@property (readonly, nonatomic) long long mediaType;
@property (readonly, nonatomic) unsigned long long frameRate;

- (id)initWithMediaType:(long long)a0 frameRate:(unsigned long long)a1;

@end
