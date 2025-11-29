@class NSString, UIImageView, WCPayControlData;

@interface WCPayAvaliableFavorView : MMUIView <CAAnimationDelegate> {
    WCPayControlData *m_data;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_frame;
    UIImageView *m_backgroundView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 Data:(id)a1;
- (void)showAnimation;
- (void)closeView;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (void).cxx_destruct;

@end
