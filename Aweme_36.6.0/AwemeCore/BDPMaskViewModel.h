@class BDPMaskViewPositon, BDPMaskViewStyle;

@interface BDPMaskViewModel : NSObject

@property (nonatomic) unsigned long long viewID;
@property (retain, nonatomic) BDPMaskViewPositon *position;
@property (retain, nonatomic) BDPMaskViewStyle *style;

- (void).cxx_destruct;

@end
