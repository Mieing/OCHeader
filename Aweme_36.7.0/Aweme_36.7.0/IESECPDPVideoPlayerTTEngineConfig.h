@class NSString, NSArray;

@interface IESECPDPVideoPlayerTTEngineConfig : IESECPDPVideoPlayerEngineConfig

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *apiStr;
@property (nonatomic) BOOL useV2Play;
@property (copy, nonatomic) NSArray *playURLs;
@property (retain, nonatomic) NSString *localVideoFileURL;
@property (nonatomic) BOOL needCookie;

@end
