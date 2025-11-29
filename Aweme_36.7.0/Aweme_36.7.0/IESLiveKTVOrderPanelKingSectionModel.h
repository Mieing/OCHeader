@class NSArray;

@interface IESLiveKTVOrderPanelKingSectionModel : IESLiveKTVOrderPanelBaseSectionModel

@property (copy, nonatomic) NSArray *itemArray;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) long long scrollDirection;
@property (nonatomic) BOOL hasFetch;

- (void)fetchKingItemArrayWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)sectionType;
- (Class)sectionClass;

@end
