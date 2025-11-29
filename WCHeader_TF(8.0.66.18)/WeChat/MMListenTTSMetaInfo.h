@class NSString;

@interface MMListenTTSMetaInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) int audioType;
@property (nonatomic) int format;
@property (nonatomic) unsigned int samplingRate;
@property (nonatomic) unsigned int bitDepth;
@property (nonatomic) unsigned int soundChannel;

+ (void)initialize;

@end
