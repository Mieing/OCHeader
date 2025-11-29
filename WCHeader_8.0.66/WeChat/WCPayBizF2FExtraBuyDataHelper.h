@class ExtraBuyInfo;

@interface WCPayBizF2FExtraBuyDataHelper : NSObject

@property (retain, nonatomic) ExtraBuyInfo *data;
@property (retain, nonatomic) ExtraBuyInfo *getFavorRespData;
@property (nonatomic) BOOL itemSelected;
@property (nonatomic) BOOL isGetFavorRequesting;

- (id)initWithData:(id)a0;
- (BOOL)shouldEnableFavorItem;
- (BOOL)shouldShowFavorItem;
- (BOOL)hasMultiItems;
- (id)favorSubtitleColor;
- (id)favorSubTitle;
- (void)setSelectItems:(id)a0;
- (id)unavailableReason;
- (unsigned int)selectedItemsAmount;
- (id)currentData;
- (void)onGetFavorResponded:(id)a0;
- (void)clearGetFavorResponseInfo;
- (unsigned long long)availableItemsCount;
- (void).cxx_destruct;

@end
