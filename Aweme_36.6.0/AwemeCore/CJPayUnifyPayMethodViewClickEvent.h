@class CJPayDefaultChannelShowConfig, NSDictionary, UIView;

@interface CJPayUnifyPayMethodViewClickEvent : NSObject

@property (weak, nonatomic) UIView *clickView;
@property (retain, nonatomic) CJPayDefaultChannelShowConfig *selectConfig;
@property (nonatomic) unsigned long long cellAction;
@property (nonatomic) BOOL hasUpdatedMaintainConfig;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
