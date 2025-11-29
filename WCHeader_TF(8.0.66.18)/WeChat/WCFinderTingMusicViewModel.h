@class NSString, MMListenCategoryItem, ForwardMessageLogicController, NSArray, FinderMusicTopicInfo, NSMutableArray, WCFinderMusicTopicDataProvider;
@protocol WCFinderTingMusicViewModelDelegate;

@interface WCFinderTingMusicViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCFinderMusicTopicDataProviderExt, WCFinderPostDataItemExt>

@property (retain, nonatomic) ForwardMessageLogicController *forwardLogic;
@property (retain, nonatomic) WCFinderMusicTopicDataProvider *dataProvider;
@property (retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo;
@property (retain, nonatomic) NSMutableArray *listenItemArray;
@property (retain, nonatomic) MMListenCategoryItem *listenCategoryItem;
@property (retain, nonatomic) NSArray *singerInfoArray;
@property (retain, nonatomic) NSArray *tabInfoArray;
@property (retain, nonatomic) NSMutableArray *sectionArray;
@property (weak, nonatomic) id<WCFinderTingMusicViewModelDelegate> delegate;
@property (nonatomic) double menuExpTime;
@property (nonatomic) BOOL singerSignatureExpand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)getMusicVideoInnerType;
+ (int)getRelatedInnerType;

- (id)initWithMusicTopicId:(unsigned long long)a0 encryptedMusicId:(id)a1 byPassInfo:(id)a2 commentScene:(int)a3 refObjectid:(id)a4;
- (unsigned long long)musicTopicId;
- (void)requestMusicTopicInfoList;
- (void)updateTabInfoArray;
- (id)defaultTabInfoArray;
- (id)eventTabInfoWithType:(unsigned long long)a0;
- (void)fetchTabVideosInfoByInnerTabArray:(id)a0 singerContact:(id)a1;
- (BOOL)containTargetInnerType:(int)a0;
- (id)createMusicianWorksListPromiseByFinderUsername:(id)a0;
- (BOOL)svrDataAvailable;
- (id)getCurrentViewController;
- (void)shareToFriend:(id)a0;
- (void)shareToMoment:(id)a0;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)onCancelForwardForForwardView:(id)a0;
- (void)onDoneForwardForForwardView:(id)a0;
- (id)getListenItemArray;
- (BOOL)isLastListenItem:(long long)a0;
- (BOOL)shouldShowMusicianListAllBtn;
- (BOOL)hasFinderSingerInfo;
- (void)getContactWithNickname:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (id)getMusicListenItemAtIndex:(long long)a0;
- (id)getMusicVideoContentVMArray;
- (id)getMusicVideoDetailListViewMode;
- (id)getRelatedVideoContentVMArray;
- (id)getRelatedVideoDetailListViewMode;
- (BOOL)enableShowMusicianIntro;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)getMusicianListCount;
- (void)addSectionToArray:(unsigned long long)a0;
- (unsigned long long)sectionTypeBySection:(long long)a0;
- (void)onMusicDataProviderFetchSuc:(int)a0;
- (void)onFinderPostSessionStartUpload:(id)a0;
- (id)eventTabInfoAtIndex:(unsigned long long)a0;
- (long long)indexOfTabType:(int)a0;
- (void)updateLikeState:(BOOL)a0;
- (id)refObjectId;
- (void).cxx_destruct;

@end
