@class NSString, UISwitch, MMDynamicColor, MMKSwitchViewOnChangeSwitchCallback;
@protocol MMKImage;

@interface KindaSwitchView : KindaView <MMKSwitchView>

@property (retain, nonatomic) UISwitch *m_switch;
@property (retain, nonatomic) MMDynamicColor *m_onTintColor;
@property (retain, nonatomic) MMDynamicColor *m_tintColor;
@property (retain, nonatomic) MMDynamicColor *m_thumbTintColor;
@property (retain, nonatomic) id<MMKImage> m_onImage;
@property (retain, nonatomic) id<MMKImage> m_offImage;
@property (retain, nonatomic) MMKSwitchViewOnChangeSwitchCallback *m_changeSwitchCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)getView;
- (void)setOnTintColor:(id)a0;
- (id)getOnTintColor;
- (void)setTintColor:(id)a0;
- (id)getTintColor;
- (void)setThumbTintColor:(id)a0;
- (id)getThumbTintColor;
- (void)setOnImage:(id)a0;
- (id)getOnImage;
- (void)setOffImage:(id)a0;
- (id)getOffImage;
- (void)setOn:(BOOL)a0;
- (BOOL)getOn;
- (void)setEnabled:(BOOL)a0;
- (BOOL)getEnabled;
- (void)setOnChangeSwitchCallback:(id)a0;
- (void)changeSwitch;
- (void).cxx_destruct;

@end
