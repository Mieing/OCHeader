@class ShelfTradeData, NSMutableArray, ShelfInfo;

@interface IESLiveNativeAppShelfListModel : IESLiveDynamicModel

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) ShelfInfo *originShelfInfo;
@property (retain, nonatomic) ShelfTradeData *originTradeData;
@property (nonatomic) BOOL enableShowTradeData;

- (id)initWithDIContext:(id)a0;
- (void)updateShelfInfo:(id)a0;
- (void)updateShelfInfo:(id)a0 tradeData:(id)a1 enableShowTradeData:(BOOL)a2;
- (long long)sectionTypeIndex:(long long)a0;
- (void)updateTradeData:(id)a0 enableShowTradeData:(BOOL)a1;
- (BOOL)hasSectionType:(long long)a0;

@end
