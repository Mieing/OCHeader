@class NSData, MMListenMusicBaseOptions;

@interface MMListenMusicBaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *musicGlobalContextBuffer;
@property (nonatomic) int testNum;
@property (retain, nonatomic) MMListenMusicBaseOptions *options;

+ (void)initialize;

@end
