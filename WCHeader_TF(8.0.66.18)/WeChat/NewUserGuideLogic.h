@class NSMutableDictionary, NewUserGuideConfig;

@interface NewUserGuideLogic : NSObject {
    NSMutableDictionary *m_dicCurrentTips;
    NewUserGuideConfig *m_config;
}

+ (id)getConfigPath;
+ (id)loadConfig;
+ (void)removeConfig;
+ (void)saveConfig:(id)a0;
+ (void)setReg;
+ (void)createNewUserGuide;
+ (void)loadNewUserGuide;
+ (void)removeNewUserGuide;
+ (id)shareLogic;

- (BOOL)showShakeRedDot;
- (void)removeShakeRedDot;
- (BOOL)showNearByRedDot;
- (void)removeNearByRedDot;
- (id)getConfig;
- (id)initWithConfig:(id)a0;
- (void)removeTip:(unsigned long long)a0;
- (BOOL)existTip:(unsigned long long)a0;
- (BOOL)checkEnd;
- (void)makeAnimate:(id)a0;
- (id)makeTip:(id)a0 Left:(BOOL)a1 Top:(BOOL)a2 closeSel:(SEL)a3 target:(id)a4;
- (void)showMainFrameTip:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sel:(SEL)a2 target:(id)a3;
- (void)removeMainFrameTip:(BOOL)a0;
- (void)showContactsTip:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sel:(SEL)a2 target:(id)a3;
- (void)removeContactsTip:(BOOL)a0;
- (void)showVoiceTip:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sel:(SEL)a2 target:(id)a3;
- (void)removeVoiceTip:(BOOL)a0;
- (void)showVoipAndPhoneTip:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 sel:(SEL)a2 target:(id)a3;
- (void)removeVoipAndPhoneTip:(BOOL)a0;
- (void).cxx_destruct;

@end
