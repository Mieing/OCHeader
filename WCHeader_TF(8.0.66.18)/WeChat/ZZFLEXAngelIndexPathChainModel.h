@class NSArray;

@interface ZZFLEXAngelIndexPathChainModel : NSObject

@property (retain, nonatomic) NSArray *listData;

- (id)initWithListData:(id)a0;
- (id /* block */)byViewTag;
- (id /* block */)bySectionTagAndViewTag;
- (id /* block */)byDataModel;
- (id /* block */)bySectionTagAndDataModel;
- (void).cxx_destruct;

@end
