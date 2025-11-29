@class NSString, CMCRecordMode;

@interface CMCLightningRecordWhiteView : UIView <CMCLightningRecordAnimatable>

@property (nonatomic) long long state;
@property (retain, nonatomic) CMCRecordMode *recordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
