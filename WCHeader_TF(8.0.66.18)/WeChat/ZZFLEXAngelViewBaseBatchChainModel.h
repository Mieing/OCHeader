@class ZZFLEXSectionModel, NSString, UIScrollView, NSMutableArray;
@protocol ZZFLEXViewModelDelegate;

@interface ZZFLEXAngelViewBaseBatchChainModel : NSObject

@property (readonly, weak, nonatomic) UIScrollView *hostView;
@property (readonly, nonatomic) BOOL xib;
@property (nonatomic) Class viewClass;
@property (retain, nonatomic) NSMutableArray *listData;
@property (retain, nonatomic) NSMutableArray *viewModelArray;
@property (retain, nonatomic) ZZFLEXSectionModel *sectionModel;
@property (weak, nonatomic) id itemsDelegate;
@property (retain, nonatomic) NSString *itemReuseIdentifier;
@property (copy, nonatomic) id /* block */ itemsEventAction;
@property (copy, nonatomic) id /* block */ itemsSelectedAction;
@property (copy, nonatomic) id /* block */ itemsConfigAction;
@property (nonatomic) long long tag;
@property (nonatomic) struct CGSize { double width; double height; } itemViewSize;
@property (readonly, weak, nonatomic) id<ZZFLEXViewModelDelegate> vmDelegate;

- (id)initWithHostView:(id)a0 viewClass:(Class)a1 vmDelegate:(id)a2 listData:(id)a3 xib:(BOOL)a4;
- (id /* block */)toSection;
- (id /* block */)withDataModelArray;
- (id /* block */)reuseIdentifier;
- (id /* block */)delegate;
- (id /* block */)eventAction;
- (id /* block */)selectedAction;
- (id /* block */)configAction;
- (id /* block */)viewTag;
- (id /* block */)viewSize;
- (id /* block */)viewHeight;
- (void)registerCellIfNeed;
- (void)setItemConfigAction:(id /* block */)a0;
- (void).cxx_destruct;

@end
