@class NSString, MMTerminatorView;

@interface WCListTipCellView : MMTableViewCell <MMTerminatorViewDelegate>

@property (retain, nonatomic) MMTerminatorView *terminatorView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightOfCellWithTip:(id)a0 subTip:(id)a1 width:(double)a2;
+ (id)terminatorViewParamsWithTip:(id)a0 subTip:(id)a1;

- (void)configureWithTip:(id)a0 subTip:(id)a1;
- (void)terminatorViewDidClickSubtitle:(id)a0;
- (void).cxx_destruct;

@end
