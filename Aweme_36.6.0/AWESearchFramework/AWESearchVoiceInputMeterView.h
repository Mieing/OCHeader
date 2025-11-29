@class NSArray, UIColor, NSString;

@interface AWESearchVoiceInputMeterView : UIView <AWESearchVoiceInputMeterViewProtocol>

@property (retain, nonatomic) NSArray *meters;
@property (retain, nonatomic) UIColor *meterColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMeterColor:(id)a0;
- (void)resetMeters;
- (void).cxx_destruct;
- (id)init;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMeters:(id)a0;

@end
