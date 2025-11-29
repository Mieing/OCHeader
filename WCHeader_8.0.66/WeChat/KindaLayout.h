@class NSString, NSMutableArray;

@interface KindaLayout : KindaView <MMKViewLayout> {
    long long flexDirection;
    long long justifyContent;
    long long flexWrap;
    long long alignItems;
    long long alignContent;
}

@property (retain, nonatomic) NSMutableArray *subviewArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setFlexDirection:(long long)a0;
- (long long)getFlexDirection;
- (void)setJustifyContent:(long long)a0;
- (long long)getJustifyContent;
- (void)setFlexWrap:(long long)a0;
- (long long)getFlexWrap;
- (void)setAlignItems:(long long)a0;
- (long long)getAlignItems;
- (void)setAlignContent:(long long)a0;
- (long long)getAlignContent;
- (void)addView:(id)a0;
- (void)addView:(id)a0 position:(int)a1;
- (void)removeView:(id)a0;
- (void)removeAllViews;
- (void)setFocusableInTouchMode:(BOOL)a0;
- (void)setDisableHighlightDarkMode:(BOOL)a0;
- (void)setOhosRenderGroup:(BOOL)a0;
- (void)setClip:(BOOL)a0;
- (void).cxx_destruct;

@end
