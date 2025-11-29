@class NSString;
@protocol IESLiveTimorService, IESLiveInteractLyricRecognitionProtocol;

@interface IESLiveLyricRecognitionMiniAppManager : NSObject

@property (weak, nonatomic) id<IESLiveTimorService> timorService;
@property (retain, nonatomic) id<IESLiveInteractLyricRecognitionProtocol> lyricComponent;
@property (retain, nonatomic) NSString *contactId;
@property (nonatomic) BOOL needReturnURL;

- (void)startLyricRecognition:(id)a0 callback:(id /* block */)a1;
- (void)stopLyricRecognition:(id)a0 callback:(id /* block */)a1;
- (void)refreshLyricRecognition:(id)a0 callback:(id /* block */)a1;
- (void)miniBootEvent:(id)a0;
- (void)miniExitEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)dealloc;

@end
