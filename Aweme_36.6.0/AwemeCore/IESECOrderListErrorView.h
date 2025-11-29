@class IESECYataErrorContentView, UIView;

@interface IESECOrderListErrorView : UIView {
    UIView *_grayView;
    UIView *_navView;
}

@property (retain, nonatomic) UIView *searchBarView;
@property (retain, nonatomic) IESECYataErrorContentView *contentView;
@property (nonatomic) unsigned long long type;
@property (nonatomic) long long retryTimes;

- (id)initWithBackActionBlock:(id /* block */)a0 refreshActionBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
