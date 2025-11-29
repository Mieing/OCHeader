@class MMTimer, NSString, MMQuickSendEmoticonBackgroundView, NSMutableDictionary, UICollectionView, UICollectionViewFlowLayout, NSArray;
@protocol MMQuickSendEmoticonViewDelegate;

@interface MMQuickSendEmoticonView : UIView <UICollectionViewDelegate, UICollectionViewDataSource> {
    UICollectionView *m_collectionView;
    UICollectionViewFlowLayout *m_collectionLayout;
    NSArray *m_wrapList;
    NSString *m_desc;
    MMTimer *m_timer;
    double m_timeInterval;
    int m_viewCount;
    unsigned long long m_startTime;
}

@property (nonatomic) BOOL didReportSearchExposure;
@property (retain, nonatomic) MMQuickSendEmoticonBackgroundView *backgroundView;
@property (nonatomic) BOOL hasReportSearchExposeNew;
@property (retain, nonatomic) NSMutableDictionary *hasExposedIndex;
@property (nonatomic) int fromScene;
@property (nonatomic) unsigned long long requestId;
@property (weak, nonatomic) id<MMQuickSendEmoticonViewDelegate> delegate;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) double bottomX;
@property (readonly, nonatomic) NSString *curShowingDesc;
@property (nonatomic) unsigned long long startShowTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setEmoticonWrapList:(id)a0 desc:(id)a1;
- (void)setEmoticonWrapList:(id)a0 desc:(id)a1 maxViewRightPos:(double)a2;
- (unsigned long long)emoticonWrapCount;
- (void)hide;
- (void)configCollectionView;
- (void)showQuickSendEmoticonView;
- (id)getChatId;
- (void)makeCommonReportHeader:(id)a0;
- (void)makeCommonEmoticonReportParams:(id)a0 emoticonWrap:(id)a1 index:(int)a2;
- (void)reportWhenExpose;
- (void)reportWhenClick:(id)a0 index:(int)a1;
- (void)reportWhenUnexpose;
- (void)reportWhenSlideEnd;
- (void)reportWhenSearchEvent:(id)a0;
- (void)checkNeedHide;
- (void)hideQuickSendEmoticonView;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)reportEvent:(id)a0 eventId:(id)a1 params:(id)a2;
- (void).cxx_destruct;

@end
