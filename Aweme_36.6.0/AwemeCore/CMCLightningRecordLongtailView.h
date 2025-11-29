@class CMCRecordMode, CAShapeLayer, NSString, CALayer, UIView, NSNumber;

@interface CMCLightningRecordLongtailView : UIView <CMCLightningRecordAnimatable>

@property (retain, nonatomic) UIView *longtailView;
@property (retain, nonatomic) CALayer *longtailLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) NSNumber *longtailShootAnimationEnabled;
@property (nonatomic) long long state;
@property (retain, nonatomic) CMCRecordMode *recordMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
