@class MMUILabel, MMUIView;

@interface PickerTitleBar : MMUIView

@property (nonatomic) BOOL isTitleInCenter;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUIView *bottomLine;

- (id)init;
- (void)setText:(id)a0;
- (void)createViews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
