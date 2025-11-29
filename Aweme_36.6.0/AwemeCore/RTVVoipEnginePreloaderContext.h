@class RxDeferred, UIView;

@interface RTVVoipEnginePreloaderContext : NSObject

@property (nonatomic) unsigned long long enterFrom;
@property (weak, nonatomic) UIView *previewView;
@property (retain, nonatomic) RxDeferred *isRenderInAdvance;

- (void).cxx_destruct;

@end
