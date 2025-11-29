@protocol SAMICoreCallbackListener;

@interface SAMICore_VcContextCreateParameter : NSObject

@property (nonatomic) const char *url;
@property (nonatomic) const char *header;
@property (nonatomic) const char *appKey;
@property (nonatomic) int connectTimeout;
@property (nonatomic) long long tokenType;
@property (nonatomic) const char *token;
@property (nonatomic) long long timestamp;
@property (nonatomic) int maxBlockSize;
@property (nonatomic) BOOL enableAudioCache;
@property (nonatomic) int audioCacheSize;
@property (nonatomic) const char *saveFileDir;
@property (retain, nonatomic) id<SAMICoreCallbackListener> listener;

@end
