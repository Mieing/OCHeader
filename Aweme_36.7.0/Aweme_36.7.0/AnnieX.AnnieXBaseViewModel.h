@class _TtC6AnnieX21AnnieXEngineViewModel, _TtC6AnnieX25AnnieXLynxEngineViewModel, _TtC6AnnieX15AnnieXBaseModel, _TtC6AnnieX24AnnieXWebEngineViewModel;
@protocol _TtP6AnnieX24IAnnieXPlatformLifecycle_;

@interface AnnieX.AnnieXBaseViewModel : NSObject {
    void /* unknown type, empty encoding */ __rts_model;
    void /* unknown type, empty encoding */ _engineViewModel;
    void /* unknown type, empty encoding */ __rts_engineType;
}

@property (nonatomic, retain) _TtC6AnnieX15AnnieXBaseModel *model;
@property (nonatomic, retain) id<_TtP6AnnieX24IAnnieXPlatformLifecycle_> anniexPlatformLifecycle;
@property (nonatomic, readonly) _TtC6AnnieX21AnnieXEngineViewModel *engineViewModel;
@property (nonatomic, retain) _TtC6AnnieX25AnnieXLynxEngineViewModel *_lynxEngineViewModel;
@property (nonatomic, readonly) _TtC6AnnieX25AnnieXLynxEngineViewModel *lynxEngineViewModel;
@property (nonatomic, retain) _TtC6AnnieX24AnnieXWebEngineViewModel *_webEngineViewModel;
@property (nonatomic, readonly) _TtC6AnnieX24AnnieXWebEngineViewModel *webEngineViewModel;

- (id)getEngineView;
- (void)sendEvent:(id)a0 :(id)a1;
- (void)reuseCard;
- (void)loadEngineView:(id)a0;
- (void)reloadEngineView:(id)a0;
- (void)setVisibleOfEngineView:(BOOL)a0;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
