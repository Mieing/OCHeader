@protocol WCCardDataSource;

@interface WCCardMoneyView : MMUIView {
    id<WCCardDataSource> _cardDataSource;
}

- (void)dealloc;
- (id)initWithCardDataSource:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
