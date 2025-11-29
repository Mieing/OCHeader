@class NSString, NSArray;
@protocol SearchContactDataProviderDelegate;

@interface SearchContactDataProvider : NSObject <contactInfoDelegate, MMYuanBaoAdvertiseCellDelegate> {
    BOOL m_isHadSearchYuanbao;
}

@property (weak, nonatomic) id<SearchContactDataProviderDelegate> delegate;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSArray *contactGroupArray;
@property (retain, nonatomic) NSString *svrErrorMsg;
@property (nonatomic) BOOL isShowDetailButton;
@property (retain, nonatomic) NSString *jumpDesc;
@property (retain, nonatomic) NSString *jumpLink;
@property (nonatomic) BOOL isFromAddFriendScene;
@property (nonatomic) BOOL isShowAIContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBSContent:(id)a0 andFoundContact:(id)a1 andSearchKeyword:(id)a2 andLocation:(id)a3 andDelegate:(id)a4;
- (id)initWithFoundContact:(id)a0 andSearchKeyword:(id)a1 andSvrErrMsg:(id)a2 andDelegate:(id)a3;
- (id)initWithFoundContacts:(id)a0 andSearchKeyword:(id)a1 andSvrErrMsg:(id)a2 andDelegate:(id)a3;
- (id)makeContactGroups:(id)a0;
- (void)setJumpDesc:(id)a0 andJumpLink:(id)a1;
- (double)getNoUserTipsCellHeight;
- (void)makeNoUserTipsCell:(id)a0;
- (void)detailButtonClicked:(id)a0;
- (long long)numberOfSectionInSearchResult;
- (long long)numberOfRowInSearchResultSection:(long long)a0;
- (double)heightForRowInSearchResultAtIndexPath:(id)a0;
- (id)makeSearchResultCellInTableView:(id)a0 atIndexPath:(id)a1;
- (id)genBlankSpaceTableViewCell:(id)a0 cellIdentifier:(id)a1;
- (void)handleSearchResultDataSelectWithIndexPath:(id)a0;
- (void)handleDidCancelSearch;
- (void)handleSearcherWillDisplayCell:(id)a0 forRowAtIndexPath:(id)a1;
- (BOOL)hasFoundContact;
- (void)showContactInfoView:(id)a0 resultRow:(unsigned int)a1;
- (void)startCommonWebSearch;
- (void)clickOnCloseYuanBaoAD;
- (void)newMessageFromContactInfo:(id)a0;
- (BOOL)checkHadSearchYuanbao;
- (BOOL)isYuanbaoSectionWithIndexPath:(id)a0;
- (void)pushYuanbaoLogicController;
- (void)reportExposureYuanBaoCell;
- (void)reportClickYuanBaoCell;
- (void).cxx_destruct;

@end
