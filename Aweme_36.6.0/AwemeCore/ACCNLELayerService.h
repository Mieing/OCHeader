@class NSArray, NSMutableDictionary, NSDictionary, UIView, ACCStickerContainerView, NSString;
@protocol ACCStickerProtocol;

@interface ACCNLELayerService : NSObject <ACCNLELayerModuleDetector>

@property (retain, nonatomic) NSArray *handlers;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) NSMutableDictionary *modules;
@property (weak, nonatomic) UIView<ACCStickerProtocol> *selectedStickerView;
@property (retain, nonatomic) NSDictionary *commonTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initilaizeHandlers;

- (void)registerModule:(long long)a0 module:(id)a1;
- (void)trackOnTapLayerView:(id)a0;
- (id)initWithStickerContainer:(id)a0 NLEImageWrapper:(id)a1;
- (void)updateNLEImageWrapper:(id)a0;
- (long long)recoveryLayerViewWithLayerList:(id)a0;
- (void).cxx_destruct;
- (id)moduleWithType:(long long)a0;

@end
