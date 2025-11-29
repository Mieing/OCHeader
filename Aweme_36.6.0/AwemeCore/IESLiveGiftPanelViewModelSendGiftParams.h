@class HTSLiveGiftItem, NSString, NSDictionary, IESLiveGiftAIClientResortInfoModel, HTSLiveGiftItemCollectionViewModel;

@interface IESLiveGiftPanelViewModelSendGiftParams : NSObject

@property (retain, nonatomic) HTSLiveGiftItem *realToSendItem;
@property (copy, nonatomic) NSString *currentSelectedItemImageURL;
@property (copy, nonatomic) NSString *fetchGiftListLogID;
@property (retain, nonatomic) HTSLiveGiftItemCollectionViewModel *selectedCollectionViewModel;
@property (copy, nonatomic) NSDictionary *trackerCommonParams;
@property (retain, nonatomic) IESLiveGiftAIClientResortInfoModel *aiResortInfo;
@property (nonatomic) long long pageType;
@property (nonatomic) BOOL onSearch;

- (id)initWithRealToSendItem:(id)a0 currentSelectedItemImageURL:(id)a1 fetchGiftListLogID:(id)a2 selectedCollectionViewModel:(id)a3 trackerCommonParams:(id)a4 aiResortInfo:(id)a5 pageType:(long long)a6 onSearch:(BOOL)a7;
- (void).cxx_destruct;

@end
