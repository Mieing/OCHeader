@class NSString, NSArray;

@interface TRTCVolumeInfo : NSObject

@property (copy, nonatomic) NSString *userId;
@property (nonatomic) unsigned long long volume;
@property (nonatomic) long long vad;
@property (nonatomic) float pitch;
@property (retain, nonatomic) NSArray *spectrumData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
