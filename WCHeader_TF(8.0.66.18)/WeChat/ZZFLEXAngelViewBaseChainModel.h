@class UIScrollView, NSMutableArray, ZZFLEXViewModel;

@interface ZZFLEXAngelViewBaseChainModel : NSObject

@property (readonly, weak, nonatomic) UIScrollView *hostView;
@property (readonly, nonatomic) BOOL xib;
@property (retain, nonatomic) NSMutableArray *listData;
@property (readonly, nonatomic) ZZFLEXViewModel *viewModel;
@property (readonly, nonatomic) long long type;

- (id)initWithHostView:(id)a0 listData:(id)a1 viewModel:(id)a2 type:(long long)a3 xib:(BOOL)a4;
- (id /* block */)toSection;
- (id /* block */)reuseIdentifier;
- (id /* block */)withDataModel;
- (id /* block */)delegate;
- (id /* block */)eventAction;
- (id /* block */)viewTag;
- (id /* block */)selectedAction;
- (id /* block */)configAction;
- (id /* block */)viewSize;
- (id /* block */)viewHeight;
- (void)registerCellIfNeed;
- (void).cxx_destruct;

@end
