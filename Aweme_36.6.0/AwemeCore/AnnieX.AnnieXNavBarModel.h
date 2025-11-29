@class NSString, _TtC6AnnieX11AnnieXColor, NSMutableArray;

@interface AnnieX.AnnieXNavBarModel : NSObject {
    void /* function */ title;
    void /* unknown type, empty encoding */ __rts_titleColor;
    void /* unknown type, empty encoding */ __rts_backgroundColor;
    void /* unknown type, empty encoding */ __rts_hideNavBar;
    void /* unknown type, empty encoding */ __rts_leftBarItems;
    void /* unknown type, empty encoding */ __rts_rightBarItems;
    void /* unknown type, empty encoding */ __rts_annieXId;
    void /* unknown type, empty encoding */ __rts_useWebTitle;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) _TtC6AnnieX11AnnieXColor *titleColor;
@property (nonatomic, retain) _TtC6AnnieX11AnnieXColor *backgroundColor;
@property (nonatomic) BOOL hideNavBar;
@property (nonatomic, retain) NSMutableArray *leftBarItems;
@property (nonatomic, retain) NSMutableArray *rightBarItems;
@property (nonatomic, copy) NSString *annieXId;
@property (nonatomic) BOOL useWebTitle;

- (id)withTitleColor:(id)a0;
- (id)withUseWebTitle:(BOOL)a0;
- (id)withBackgroundColor:(id)a0;
- (id)withHideNavBar:(BOOL)a0;
- (id)withAnnieXId:(id)a0;
- (id)withLeftBarItems:(id)a0;
- (id)withRightBarItems:(id)a0;
- (BOOL)isEqualItems:(id)a0 :(id)a1;
- (BOOL)isEqualNavBarItem:(id)a0 :(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)withTitle:(id)a0;
- (id)shallowCopy;

@end
