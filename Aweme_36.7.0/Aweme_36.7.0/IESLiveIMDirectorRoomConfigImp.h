@class IESLiveIMDirectorRoomDispatcher;

@interface IESLiveIMDirectorRoomConfigImp : HTSLiveMessageConfigImp

@property (retain, nonatomic) IESLiveIMDirectorRoomDispatcher *dispatcher;

+ (unsigned long long)decoderSceneTypeForScene:(unsigned long long)a0;
+ (id)configImpWithBizConfig:(id)a0;
+ (id)pathForScene:(unsigned long long)a0;
+ (id)websocketUrlForScene:(unsigned long long)a0;

- (void).cxx_destruct;

@end
