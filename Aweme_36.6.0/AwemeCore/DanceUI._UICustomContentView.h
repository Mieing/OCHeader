@class UIView;
@protocol _TtP7DanceUI31_UIContentConfigurationInternal_;

@interface DanceUI._UICustomContentView : UIView <DanceUI._UIContentViewInternal> {
    void /* unknown type, empty encoding */ wrappedContentView;
}

@property (nonatomic, readonly) UIView *_wrappedContentView;
@property (nonatomic, retain) id<_TtP7DanceUI31_UIContentConfigurationInternal_> configuration;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (BOOL)supports:(id)a0;

@end
