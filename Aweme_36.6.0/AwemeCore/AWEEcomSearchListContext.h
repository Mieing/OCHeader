@class NSMutableArray;
@protocol AWEDoubleColumnSearchMerchandiseDataProviderEnvironmentVariables, AWEDoubleColumnSearchMerchandiseDataProviderStorage;

@interface AWEEcomSearchListContext : AWEPageContext

@property (weak, nonatomic) id<AWEDoubleColumnSearchMerchandiseDataProviderStorage> storage;
@property (weak, nonatomic) id<AWEDoubleColumnSearchMerchandiseDataProviderEnvironmentVariables> env;
@property (retain, nonatomic) NSMutableArray *previousVisibleIndexPaths;

- (void).cxx_destruct;

@end
