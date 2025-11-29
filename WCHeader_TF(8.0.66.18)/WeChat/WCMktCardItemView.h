@class NSArray;
@protocol WCMktCardItemViewDelegate;

@interface WCMktCardItemView : UIView

@property (retain, nonatomic) NSArray *couponList;
@property (weak, nonatomic) id<WCMktCardItemViewDelegate> delegate;

- (void)updateCardItemViewWithCouponListData:(id)a0 displayCount:(unsigned int)a1;
- (void)setupContentView:(unsigned int)a0;
- (id)genGeneralCouponsView:(id)a0 index:(long long)a1;
- (id)genGeneralCardView:(id)a0 index:(long long)a1;
- (id)genTagButtonWithTagData:(id)a0 isCard:(BOOL)a1;
- (void)clickGeneralCouponTagListBtn:(id)a0;
- (void)clickGeneralCardTagListBtn:(id)a0;
- (void)handleTagBtnClick:(id)a0;
- (void)cardBtnClick:(id)a0;
- (void).cxx_destruct;

@end
