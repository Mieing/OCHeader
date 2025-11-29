@class NSArray;

@interface ZZFLEXAngelViewEditChainModel : NSObject

@property (nonatomic) long long editType;
@property (retain, nonatomic) NSArray *listData;

- (id)initWithType:(long long)a0 andListData:(id)a1;
- (id /* block */)byViewTag;
- (id /* block */)byDataModel;
- (id /* block */)byViewClassName;
- (id /* block */)atIndexPath;
- (id)p_executeWithSectionModel:(id)a0 viewModel:(id)a1;
- (void).cxx_destruct;

@end
