@class NSString, CContact;

@interface BTReaderMsgSectionData : BTMsgSectionData <BTReaderItemCellViewModelDelegate>

@property (nonatomic) BOOL isTopItemShowBigCover;
@property (readonly, nonatomic) CContact *contact;
@property (readonly, nonatomic) BOOL bIsExpand;
@property (readonly, nonatomic) BOOL bIsBrandSettingFold;
@property (readonly, nonatomic) BOOL isFold;
@property (readonly, nonatomic) unsigned long long itemShowCount;
@property (readonly, nonatomic) BOOL isOftenReadContact;
@property (readonly, nonatomic) BOOL isStarContact;
@property (readonly, nonatomic) BOOL isTopItemShowLargeCover;
@property (readonly, nonatomic) BOOL isMsgTopRightUseRecReason;
@property (readonly, nonatomic) NSString *bizUsername;
@property (readonly, nonatomic) unsigned long long firstMid;
@property (readonly, nonatomic) unsigned int lastIdx;
@property (readonly, nonatomic) unsigned int expanState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateSectionDataWithMsgWrap:(id)a0;

- (id)initWithMsgWrap:(id)a0 sectionWidth:(double)a1 displayMode:(unsigned int)a2 delegate:(id)a3;
- (void)updateMsgWrap:(id)a0;
- (void)updateTopItemCoverStatus;
- (unsigned long long)sectionType;
- (long long)numberOfRowsInSection;
- (double)heightForRowInSection:(unsigned long long)a0;
- (void)setSectionWidth:(double)a0;
- (void)initItemViewModelArr;
- (void)updateItemViewModelArr;
- (void)updateContact:(BOOL)a0;
- (id)arrReaderItemCellViewModel;
- (void)onItemViewModelViewHeightChange:(id)a0;
- (void).cxx_destruct;

@end
