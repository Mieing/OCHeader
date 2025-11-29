@class GCCommonServer, NSString, NSData, GCInputAtView, GCInputAtModelConfig, NSMutableDictionary, MMGrowTextView, NSMutableSet, NSMutableArray, GCCollectionViewManager;

@interface GCInputAtModel : NSObject <GCClvManagerProtocol, MMGrowTextViewCustomeTagDelegate, GCBaseCellModelDelegate>

@property (retain, nonatomic) GCCollectionViewManager *viewManager;
@property (retain, nonatomic) GCCommonServer *server;
@property (retain, nonatomic) NSData *context;
@property (retain, nonatomic) NSMutableArray *atCellModelArray;
@property (retain, nonatomic) NSMutableArray *contentRelatedUserList;
@property (retain, nonatomic) NSMutableSet *contentUserIdSet;
@property (retain, nonatomic) NSMutableArray *normalUserList;
@property (retain, nonatomic) NSMutableDictionary *userNameToCellModel;
@property (retain, nonatomic) NSMutableArray *allCellModelArray;
@property (retain, nonatomic) NSString *filterText;
@property (nonatomic) BOOL isAtFilter;
@property (nonatomic) unsigned long long inputAtLocation;
@property (retain, nonatomic) NSString *inputAtFilterPreContent;
@property (retain, nonatomic) NSString *inputAtFilterAfterContent;
@property (nonatomic) BOOL isFromSelctChange;
@property (retain, nonatomic) NSString *currentNsText;
@property (nonatomic) BOOL hasReceiveResponse;
@property (nonatomic) unsigned long long fetchCnt;
@property (nonatomic) BOOL reported;
@property (retain, nonatomic) GCInputAtView *atView;
@property (retain, nonatomic) GCInputAtModelConfig *config;
@property (weak, nonatomic) MMGrowTextView *growTextView;
@property (retain, nonatomic) NSMutableSet *atList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)triggerGetContentList;
- (void)handleResponse:(id)a0;
- (void)updateViewEmptyState;
- (void)handleNewCellModelArray:(id)a0;
- (void)onContentChange;
- (id)getCustomeTagLocation:(id)a0 textView:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)handleTextDidChanged:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)checkAtListComplete;
- (void)hideAtPanel;
- (BOOL)checkAtListMatch;
- (void)exitAtFilterStatus;
- (id)atCellModelFromUserInfo:(id)a0;
- (id)isSearchDictInfo;
- (void)handleReportWithCellModel:(id)a0;
- (void).cxx_destruct;

@end
