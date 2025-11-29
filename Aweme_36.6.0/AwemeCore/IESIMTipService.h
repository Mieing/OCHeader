@class NSString;

@interface IESIMTipService : HTSService <IESIMTipService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)p_duxTipTypeWithIESIMType:(unsigned long long)a0;
- (id)tipWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(unsigned long long)a1 content:(id)a2;

@end
