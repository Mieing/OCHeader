@class NSString;

@interface IESLiveStreamPlayerLiveRoomModelPlugin : IESLiveStreamPlayerBasePlugin <IESLiveStreamPlayerLiveRoomModelPluginProtocol>

@property (retain, nonatomic) NSString *updateRoomModelReason;
@property (nonatomic) BOOL isInitForReuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldActivatePlugin;

- (long long)roomScene;
- (BOOL)compareStreamData:(id)a0 callTrace:(id)a1;
- (BOOL)shouldUpdateStreamWithRoom:(id)a0 callTrace:(id)a1;
- (id)getPullDataStreamID;
- (BOOL)shouldCompareStreamDataInMultiExtraPlayer;
- (BOOL)compareMultiExtraPlayerStreamData:(id)a0 callTrace:(id)a1;
- (void)pe_commonInit;
- (void)pe_prepareForReuse;
- (void).cxx_destruct;
- (BOOL)isFirstPlay;

@end
