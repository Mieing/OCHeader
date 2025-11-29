@class UIView;
@protocol HTSVideoSoundEffectPanelViewProtocol;

@interface ACCVideoEditVolumeChangeContext : NSObject

@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) UIView<HTSVideoSoundEffectPanelViewProtocol> *panelView;

+ (id)createWithPanelView:(id)a0 changeType:(unsigned long long)a1;

- (void).cxx_destruct;

@end
