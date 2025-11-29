@class NSString, MVImageLoader, MusicCallbackApi;

@interface MusicSerachFlutterViewController : MMFlutterViewController <IMusicPlayerExt>

@property (copy, nonatomic) NSString *toUseranme;
@property (retain, nonatomic) MusicCallbackApi *flutterMusicPlayerCallBack;
@property (retain, nonatomic) MVImageLoader *imageDownloader;
@property (copy, nonatomic) id /* block */ sendMusicHandler;
@property (copy, nonatomic) id /* block */ viewDidPopedOrDismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;

- (id)initWithToUsername:(id)a0;
- (void)viewDidLoad;
- (void)handleSendWithMusicInfo:(id)a0;
- (void)handleSendMusicWithMusicInfo:(id)a0 coverImageData:(id)a1;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)onMusicPlayInnerStatusChanged:(unsigned long long)a0 musicInfo:(id)a1 errInfo:(id)a2;
- (long long)flutterValueFromState:(unsigned long long)a0;
- (void).cxx_destruct;

@end
