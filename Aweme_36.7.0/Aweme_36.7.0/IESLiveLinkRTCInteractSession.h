@class NSString, LCInteractRender, IESLiveLinkRTCInteractSessionView, ByteRTCVideoCanvas;

@interface IESLiveLinkRTCInteractSession : NSObject

@property (nonatomic) BOOL isHost;
@property BOOL retainLastVideoFrame;
@property (retain, nonatomic) IESLiveLinkRTCInteractSessionView *view;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (retain, nonatomic) ByteRTCVideoCanvas *canvas;
@property (retain, nonatomic) LCInteractRender *renderer;
@property (copy, nonatomic) NSString *strUID;
@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long streamIndex;
@property (copy, nonatomic) NSString *videoFormat;
@property (nonatomic) BOOL enableVideo;
@property (nonatomic) BOOL needRender;
@property (nonatomic) BOOL isLocalSmallWindow;
@property (nonatomic) BOOL isFromRoomEx;
@property (nonatomic) BOOL isFromRoomEx2;

- (id)initWithStrUid:(id)a0 needRender:(BOOL)a1;
- (id)initWithStrUid:(id)a0;
- (void).cxx_destruct;

@end
