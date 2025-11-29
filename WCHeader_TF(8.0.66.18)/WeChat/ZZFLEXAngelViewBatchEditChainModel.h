@class NSArray;

@interface ZZFLEXAngelViewBatchEditChainModel : NSObject

@property (retain, nonatomic) NSArray *listData;
@property (nonatomic) long long editType;

- (id)initWithType:(long long)a0 andListData:(id)a1;
- (id /* block */)all;
- (id /* block */)byViewTag;
- (id /* block */)byDataModel;
- (id /* block */)byViewClassName;
- (id)p_deleteWithSectionModel:(id)a0 viewModelArray:(id)a1;
- (void)p_updateViewModelArray:(id)a0;
- (id)dataModelArrayByViewModelArray:(id)a0;
- (void).cxx_destruct;

@end
