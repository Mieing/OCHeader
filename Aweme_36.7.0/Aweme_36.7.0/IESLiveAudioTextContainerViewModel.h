@class NSString, HTSLiveRoomTextBg;

@interface IESLiveAudioTextContainerViewModel : NSObject <HTSLiveMessageSubscriber, IESLiveSEIListener>

@property (nonatomic) BOOL preCmdIsRestart;
@property (retain, nonatomic) HTSLiveRoomTextBg *textBg;
@property (copy, nonatomic) id /* block */ canViewShow;
@property (copy, nonatomic) id /* block */ isShowing;
@property (copy, nonatomic) id /* block */ didRecvBGData;
@property (copy, nonatomic) id /* block */ didRecvAnchorRow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (long long)convertAlign:(int)a0;
- (void)processWrdsData:(id)a0;
- (void)processSeiData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)messageReceived:(id)a0;

@end
