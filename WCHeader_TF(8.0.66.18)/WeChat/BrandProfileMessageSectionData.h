@class NSString, BizMessage, BrandProfileMsgFooterViewModel, CContact, NSMutableArray;

@interface BrandProfileMessageSectionData : BrandProfileBaseSectionData {
    BOOL _didUnfoldItemList;
}

@property (nonatomic) BOOL isFeatureMsg;
@property (nonatomic) BOOL isFeatureMsgFold;
@property (retain, nonatomic) BrandProfileMsgFooterViewModel *footerVM;
@property (readonly, nonatomic) unsigned long long tabType;
@property (retain, nonatomic) NSMutableArray *arrItemMsg;
@property (retain, nonatomic) BizMessage *groupMsg;
@property (nonatomic) unsigned int groupMsgID;
@property (retain, nonatomic) NSString *groupUniqueIDStr;
@property (nonatomic) unsigned int groupAppmsgID;
@property (nonatomic) unsigned int groupMsgIndex;
@property (nonatomic) unsigned int publishTime;
@property (nonatomic) BOOL isTextMsg;
@property (nonatomic) BOOL hasPublishTimeHeader;
@property (readonly, nonatomic) NSString *publishTimeStr;
@property (readonly, nonatomic) unsigned long long headerType;
@property (readonly, nonatomic) BOOL isTopItemShowLargeCover;
@property (readonly, nonatomic) BOOL isTopItemReader;
@property (readonly, nonatomic) BOOL isItemListFold;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, nonatomic) unsigned int itemFoldLeftCount;
@property (readonly, nonatomic) double topItemPadding;
@property (readonly, nonatomic) NSMutableArray *viewModelList;
@property (retain, nonatomic) NSMutableArray *itemViewModelList;
@property (readonly, nonatomic) BOOL isOutboxMsg;
@property (nonatomic) unsigned long long publishStatus;
@property (retain, nonatomic) CContact *brandContact;

- (id)initWithGroupMsg:(id)a0 sectionWidth:(double)a1 tabType:(unsigned long long)a2 isFeatureMsg:(BOOL)a3;
- (void)addHeaderViewModel;
- (void)addFooterViewModel;
- (void)addReaderViewModelList;
- (void)__appendMsgItem:(id)a0;
- (unsigned long long)indexForItemModel:(id)a0;
- (BOOL)removeItemModel:(id)a0;
- (void)clearLayoutCache;
- (void)onUnfoldFeatureHeader;
- (void)onUnfoldItemListFooter;
- (void)removeFooterIfNeed;
- (long long)numberOfRowsInSection;
- (double)heightForHeaderInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (unsigned long long)sectionType;
- (id)genDateTimeStringByUInt:(unsigned int)a0;
- (void).cxx_destruct;

@end
