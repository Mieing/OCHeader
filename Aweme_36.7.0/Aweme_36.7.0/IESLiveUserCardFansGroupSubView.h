@class IESLiveUserCardStore;

@interface IESLiveUserCardFansGroupSubView : UIView

@property (retain, nonatomic) IESLiveUserCardStore *store;
@property (nonatomic) long long itemType;

- (id)getShowTextWithNumber:(long long)a0;
- (id)getShowTextWithCountStr:(id)a0 andSubStr:(id)a1;
- (void)generateIconWithImage:(id)a0 completion:(id /* block */)a1;
- (id)formatDouble:(double)a0;
- (id)initWithUserCardStore:(id)a0 itemType:(long long)a1;
- (void).cxx_destruct;
- (void)setupUI;

@end
