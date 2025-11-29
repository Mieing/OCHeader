@protocol InternalFavorDescViewDelegate;

@interface InternalFavorDescView : UIView

@property (weak, nonatomic) id<InternalFavorDescViewDelegate> m_delegate;

- (id)init;
- (void)onClick;
- (void)updateDescList:(id)a0 selected:(BOOL)a1 totalDiscount:(id)a2;
- (void).cxx_destruct;

@end
