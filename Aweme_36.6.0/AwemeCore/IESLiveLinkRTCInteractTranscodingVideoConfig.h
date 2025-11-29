@class NSString;

@interface IESLiveLinkRTCInteractTranscodingVideoConfig : NSObject

@property (copy, nonatomic) NSString *codec;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long fps;
@property (nonatomic) long long gop;
@property (nonatomic) long long kBitRate;
@property (nonatomic) BOOL lowLatency;

- (void).cxx_destruct;

@end
