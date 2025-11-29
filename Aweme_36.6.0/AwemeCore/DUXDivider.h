@class NSString;

@interface DUXDivider : UIView <IESIMDividerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long type;

+ (double)dux_borderWidth;
+ (unsigned long long)duxTypeWithIESIMType:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1 preferLightTheme:(BOOL)a2;
- (void)iesim_setType:(unsigned long long)a0;
- (id)init;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1;

@end
