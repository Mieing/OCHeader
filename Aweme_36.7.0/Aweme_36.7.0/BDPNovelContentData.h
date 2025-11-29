@class NSHashTable, BDPNovelContentDetail, NSMutableDictionary, TTTextLayoutPage, TTEpubLayoutResult, BDPNovelComponentModel, BDPNovelElementManager, BDPNovelContentMeta;

@interface BDPNovelContentData : NSObject

@property (retain, nonatomic) NSMutableDictionary *detailLayoutPages;
@property (retain, nonatomic) BDPNovelContentMeta *contentMeta;
@property (retain, nonatomic) BDPNovelContentDetail *contentDetail;
@property (weak, nonatomic) BDPNovelComponentModel *model;
@property (weak, nonatomic) BDPNovelElementManager *elementManager;
@property (retain, nonatomic) TTEpubLayoutResult *layoutResult;
@property (nonatomic) unsigned long long layoutStatus;
@property (nonatomic) long long queuePriority;
@property (readonly, nonatomic) double waitingTimeStart;
@property (retain, nonatomic) NSHashTable *delegates;
@property (weak, nonatomic) TTTextLayoutPage *lastLayoutPage;
@property (nonatomic) long long calFreeWords;
@property (nonatomic) BOOL reRender;

- (id)getGeneralElementWithOffsetStart:(long long)a0 offsetEnd:(long long)a1 contentId:(id)a2;
- (id)getGeneralElementForChapterStart:(id)a0;
- (id)getGeneralElementForChapterEnd:(id)a0;
- (id)generateGeneralElementStr:(id)a0;
- (void)onLayoutPage:(id)a0 isLast:(BOOL)a1;
- (id)getPageWithIndex:(long long)a0;
- (id)getPageWithWithOffset:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)htmlString;

@end
