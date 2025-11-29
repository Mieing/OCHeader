@class NSString, HMDThreadSafeDictionary;

@interface IESIMVideoPluginImpl : NSObject <IESIMVideoPlugin>

@property (retain, nonatomic) HMDThreadSafeDictionary *frequencyControlForTapLinkVideoCover;
@property (retain, nonatomic) HMDThreadSafeDictionary *frequencyControlForRequestLinkUrlVisual;
@property (retain, nonatomic) HMDThreadSafeDictionary *urlCardDataControllerMaps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)getMediaDisplayMessageTypes;
- (BOOL)isMessageDisplayEnable:(id)a0 newestMessageCreateTime:(long long)a1 sceneType:(unsigned long long)a2;
- (BOOL)isCurrentTopVCExchangeCameraViewController;
- (id)createImageExchangeTaskWithContentDict:(id)a0;
- (void)trackShareVideoMsgSuccessWithContext:(id)a0 message:(id)a1;
- (id)transcodeStrategy:(id)a0;
- (id)mediaDecrypterWrapperWithInputPath:(id)a0 outputPath:(id)a1 decryptionKey:(id)a2;
- (void)getMediaController:(id)a0 inMessageListVC:(id)a1 dataConfig:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
- (BOOL)shouldCheckLinkVideoCoverUnavailableForMsgId:(id)a0;
- (void)markTapedLinkVideoCoverUnavailableForMsgId:(id)a0;
- (BOOL)shouldRequestLinkUrlVisualForUrlMsgKey:(id)a0;
- (void)markRequestLinkUrlVisualForUrlMsgKey:(id)a0 addValue:(long long)a1;
- (id)urlCardDataControllerWithConvId:(id)a0 msgId:(id)a1;
- (void)setUrlCardDataController:(id)a0 forConvId:(id)a1 msgId:(id)a2;
- (void)clearUrlCardDataControllerForConvId:(id)a0;
- (double)fansGroupFeedEmojisViewAreaCustomHeight;
- (id)p_linkVideoCoverFrequencyControlWithUid:(id)a0;
- (id)p_linkVideoCoverRequestFrequencyControlWithUid:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
