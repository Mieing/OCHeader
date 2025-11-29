@class IESLiveIMAppInfo, NSString, NSData, NSObject;
@protocol OS_dispatch_queue, IESLiveIMDecoder, IESLiveIMFetcher;

@interface IESLiveIMConfig : NSObject <IESLiveIMConfig>

@property (retain, nonatomic) IESLiveIMAppInfo *appInfo;
@property (retain, nonatomic) id<IESLiveIMDecoder> decoder;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue;
@property (retain, nonatomic) id<IESLiveIMFetcher> shortLinkFetcher;
@property (retain, nonatomic) id<IESLiveIMFetcher> longLinkFetcher;
@property (nonatomic) BOOL enableWS;
@property (nonatomic) BOOL disableExtraLink;
@property (nonatomic) BOOL allowReconnectCommand;
@property (nonatomic) BOOL forceUseWS;
@property (nonatomic) double shortLinkFallbackDelay;
@property (nonatomic) double shortLinkFallbackDelayMax;
@property (nonatomic) BOOL enableConservativeStrategy;
@property (nonatomic) double changeToShortLinkDelay;
@property (nonatomic) BOOL isSupportZstd;
@property (retain, nonatomic) NSData *zstdDictData;
@property (copy, nonatomic) NSString *zstdDictVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configWithBizConfig:(id)a0;
+ (id)configWithDefault;

@end
