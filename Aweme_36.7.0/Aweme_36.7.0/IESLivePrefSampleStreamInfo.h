@class NSString, NSNumber, NSDictionary;

@interface IESLivePrefSampleStreamInfo : NSObject

@property (nonatomic) unsigned long long cap_fps;
@property (copy, nonatomic) NSString *cap_preset;
@property (retain, nonatomic) NSNumber *encode_fps;
@property (retain, nonatomic) NSNumber *preview_fps;
@property (retain, nonatomic) NSNumber *real_fps;
@property (retain, nonatomic) NSNumber *in_cap_fps;
@property (retain, nonatomic) NSNumber *out_cap_fps;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void).cxx_destruct;

@end
