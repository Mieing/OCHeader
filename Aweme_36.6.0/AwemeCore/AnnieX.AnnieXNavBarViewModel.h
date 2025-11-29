@class NSString, _TtC6AnnieX11AnnieXColor;

@interface AnnieX.AnnieXNavBarViewModel : NSObject {
    void /* unknown type, empty encoding */ uiService;
    void /* unknown type, empty encoding */ __rts_navBarModel;
    void /* unknown type, empty encoding */ __rts_navBarState;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) _TtC6AnnieX11AnnieXColor *titleColor;
@property (nonatomic, retain) _TtC6AnnieX11AnnieXColor *backgroundColor;

- (id)getContainerUIService;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setRightItems:(id)a0;
- (void)setLeftItems:(id)a0;

@end
