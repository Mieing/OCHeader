@class NSString, NSDictionary;

@interface BDPBgAudioModel : BDPCommonAudioModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *epname;
@property (copy, nonatomic) NSString *singer;
@property (copy, nonatomic) NSString *coverImgUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *protocol;
@property (nonatomic) BOOL autoplay;
@property (copy, nonatomic) NSString *shareMode;
@property (copy, nonatomic) NSDictionary *audioPage;

- (void).cxx_destruct;

@end
