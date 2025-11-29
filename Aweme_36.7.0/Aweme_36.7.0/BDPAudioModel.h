@class NSString;

@interface BDPAudioModel : BDPCommonAudioModel

@property (copy, nonatomic) NSString *encryptToken;
@property (nonatomic) BOOL obeyMuteSwitch;
@property (nonatomic) BOOL autoplay;
@property (nonatomic) BOOL loop;
@property (copy, nonatomic) NSString *shareMode;
@property (nonatomic) BOOL recreate;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
