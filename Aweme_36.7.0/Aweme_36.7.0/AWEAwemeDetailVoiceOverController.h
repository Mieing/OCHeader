@class AWEAwemeDetailVoiceOverControllerMultipleDelegateDispatcher, NSString;

@interface AWEAwemeDetailVoiceOverController : AWEAwemeNewDetailBaseController <AWEAwemeDetailVoiceOverControllerProtocol>

@property (nonatomic) BOOL isDidCallConfigVoiceOverElements;
@property (retain, nonatomic) AWEAwemeDetailVoiceOverControllerMultipleDelegateDispatcher *multipleDelegateDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configVoiceOverElements;
- (void)addListenerForMultipleDelegateDispatcher:(id)a0;
- (void)updateVoiceOverElement:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;

@end
