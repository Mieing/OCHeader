@class UIStackView;

@interface IESLiveNativeAppShelfTradeDataView : UIView {
    long long _dataType;
}

@property (retain, nonatomic) UIStackView *stackView;

- (void)addGesture;
- (void)updateWithTradeData:(id)a0;
- (void)onTapSelf;
- (void).cxx_destruct;
- (id)initWithDataType:(long long)a0;
- (void)setupUI;

@end
