@class UIColor, NSString, NSDictionary, RTVVoipSession, NSObject;
@protocol RxInjector, RTVStickerPanelPluginInterface;

@interface RTVStickerPanelContext : NSObject

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (copy, nonatomic) NSDictionary *trackInfo;
@property (copy, nonatomic) NSString *trackKeyPrefix;
@property (weak, nonatomic) RTVVoipSession *voipSession;
@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (readonly, nonatomic) NSObject<RTVStickerPanelPluginInterface> *plugin;

- (id)initWithPlugin:(id)a0 injector:(id)a1;
- (void).cxx_destruct;

@end
