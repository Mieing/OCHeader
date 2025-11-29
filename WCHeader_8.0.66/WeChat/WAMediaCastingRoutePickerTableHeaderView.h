@class NSString, MMUILabel, MMProgressViewEx;

@interface WAMediaCastingRoutePickerTableHeaderView : UIView

@property (retain, nonatomic) MMUILabel *label;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) MMProgressViewEx *loadingView;
@property (readonly, nonatomic) unsigned long long type;

- (id)initWithType:(unsigned long long)a0 viewModel:(id)a1;
- (void)layoutSubviews;
- (void)updateRefreshingStatus:(BOOL)a0;
- (void).cxx_destruct;

@end
