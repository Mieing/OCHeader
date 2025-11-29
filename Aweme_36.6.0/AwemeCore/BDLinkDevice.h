@class NSURLSession, NSString, NSURLSessionTask, NSMutableDictionary, BDLinkUtils, NSLock, BDByteCastHttpServerManager;

@interface BDLinkDevice : NSObject <BDByteCastURLSessionDelegate, NSCopying> {
    long long _checkCounter;
}

@property (nonatomic) BOOL hasSentStartCommand;
@property (copy, nonatomic) NSString *playingUrl;
@property (retain, nonatomic) NSURLSession *urlSession;
@property (nonatomic) BOOL supportPing;
@property (weak, nonatomic) NSURLSessionTask *playTask;
@property (retain, nonatomic) NSMutableDictionary *redirectionBlockDic;
@property (retain, nonatomic) NSLock *redirectionBlockDicLock;
@property (readonly, copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) long long port;
@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *data;
@property (readonly, copy, nonatomic) NSString *sinkVersion;
@property (nonatomic) BOOL isSeeking;
@property (readonly, nonatomic) BOOL isSupportPlayList;
@property (nonatomic) long long checkCounter;
@property (nonatomic) long long playRefCounter;
@property (retain, nonatomic) BDLinkUtils *bdlinkUtils;
@property (retain, nonatomic) BDByteCastHttpServerManager *httpServer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setPlaySpeed:(float)a0;
- (void)sendMessage:(id)a0 withCallback:(id /* block */)a1;
- (void)addVolume;
- (void)reduceVolume;
- (void)playNextDrama;
- (void)playDramaWithDramaId:(id)a0;
- (void)playPreDrama;
- (void)clearDramaList;
- (void)registerWithSourceDeviceInfo:(id)a0 andCallback:(id /* block */)a1;
- (void)unregisterWithSourceDeviceInfo:(id)a0 andCallback:(id /* block */)a1;
- (void)getVolumeInfoWithCallback:(id /* block */)a0;
- (void)getMediaInfoWithCallback:(id /* block */)a0;
- (void)addDramaList:(id)a0 beforeDramaId:(id)a1 completion:(id /* block */)a2;
- (void)setRepeatMode:(long long)a0 completion:(id /* block */)a1;
- (void)urlSessionDelegator:(id)a0 requestUrl:(id)a1 resolvedUrl:(id)a2 taskDescription:(id)a3 statusCode:(long long)a4;
- (void)setURLRedirectCompletionBlock:(id /* block */)a0 forKey:(id)a1;
- (void)requestRedirectWithOriginUrl:(id)a0 intermediateUrl:(id)a1 maxCount:(long long)a2 currentIndex:(long long)a3;
- (id /* block */)getAndRemoveURLRedirectCompletionBlockForKey:(id)a0;
- (void)requestRedirectUrl:(id)a0 maxCount:(long long)a1 completion:(id /* block */)a2;
- (id)initWithUrl:(id)a0 andName:(id)a1 andData:(id)a2 sinkVersion:(id)a3 supportPing:(BOOL)a4 contextId:(id)a5;
- (void)requestWithParameter:(id)a0 cacheBodyData:(BOOL)a1 andTimeout:(double)a2;
- (void)play:(id)a0 retryCount:(long long)a1 completion:(id /* block */)a2;
- (void)requestWithParameter:(id)a0 cacheBodyData:(BOOL)a1;
- (void)requestWithParameter:(id)a0 cacheBodyData:(BOOL)a1 andCallback:(id /* block */)a2;
- (void)sendMessage:(id)a0 withParameterDictionary:(id)a1 andCallback:(id /* block */)a2;
- (void)trackBDLinkSendMessageWithCategory:(id)a0 extra:(id)a1;
- (void)play:(id)a0 completion:(id /* block */)a1;
- (void)resumeWithSpeed:(float)a0;
- (void)seekToPosition:(unsigned int)a0 withTag:(unsigned int)a1;
- (void)getNetInfo;
- (void)getStatusInfoWithCallback:(id /* block */)a0;
- (void)updateDeviceInfo;
- (void)swapDeviceInfo:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)setVolume:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBullet:(BOOL)a0;

@end
