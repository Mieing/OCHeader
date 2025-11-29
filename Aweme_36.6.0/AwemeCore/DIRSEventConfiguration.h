@class NSData, DIRSEventObserver, DIRSConfig;

@interface DIRSEventConfiguration : NSObject

@property (nonatomic) BOOL UIDEnabled;
@property (nonatomic) BOOL compressionZSTDEnabled;
@property (retain, nonatomic) NSData *zstdDict;
@property (nonatomic) BOOL filterEnabled;
@property (readonly) DIRSEventObserver *observer;
@property (nonatomic) BOOL prioritizationEnabled;
@property (nonatomic) BOOL replicationEnabled;
@property (nonatomic) BOOL samplingEnabled;
@property (nonatomic) unsigned long long samplingCapabilities;
@property (weak, nonatomic) DIRSConfig *base;
@property (copy, nonatomic) id /* block */ configureEventInterceptorBlock;
@property (copy, nonatomic) id /* block */ configurePreBatchFilterBlock;
@property (copy, nonatomic) id /* block */ configureEventPacketBlock;
@property (nonatomic) unsigned long long eventExpirationTime;
@property (nonatomic) long long packetStrategy;
@property (nonatomic) unsigned long long maxPacketEventCount;
@property (nonatomic) unsigned long long maxPacketBytes;
@property (nonatomic) unsigned long long maxFileBytes;
@property (nonatomic) unsigned long long maxPropertyBytes;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
