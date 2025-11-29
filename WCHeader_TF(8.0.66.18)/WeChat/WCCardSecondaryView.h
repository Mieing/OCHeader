@protocol WCCardSecondaryViewDelegate, WCCardDataSource;

@interface WCCardSecondaryView : MMUIView {
    id<WCCardDataSource> _cardDataSource;
}

@property (weak, nonatomic) id<WCCardSecondaryViewDelegate> delegate;

- (void)dealloc;
- (id)initWithCardDataSource:(id)a0;
- (void)layoutSubviews;
- (void)fieldClicked:(id)a0;
- (void).cxx_destruct;

@end
