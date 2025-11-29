@class NSString, NSArray, NSDictionary, NSMutableArray;

@interface AWEVideoPublishChapterViewModel : NSObject

@property (retain, nonatomic) NSMutableArray *chapterDetails;
@property (retain, nonatomic) NSMutableArray *chapterBarColor;
@property (copy, nonatomic) NSString *chapterAbstract;
@property (nonatomic) long long chapterType;
@property (nonatomic) BOOL isIntelligentChapter;
@property (nonatomic) unsigned long long chapterRecommendType;
@property (nonatomic) unsigned long long chapterRecommendSource;
@property (retain, nonatomic) NSArray *chapterRecommendDetail;
@property (copy, nonatomic) NSString *chapterRecommendAbstract;
@property (copy, nonatomic) NSString *chapterRecommendToken;
@property (nonatomic) long long syncIntelligentChapterStatus;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) BOOL isReeditRecommendChapter;
@property (copy, nonatomic) NSString *chapterEditorOpenFrom;
@property (nonatomic) unsigned long long reeditChapterRecommendSource;
@property (nonatomic) long long chapterRecommendChapterApplyStatus;
@property (nonatomic) BOOL hasShownDragProgressHintAnimation;
@property (nonatomic) BOOL hasShownPinchProgressHintAnimation;
@property (copy, nonatomic) NSString *chapterEditorReferString;
@property (copy, nonatomic) id /* block */ regenCompletion;

- (id)findChapterPointWithTimestamp:(long long)a0;
- (id)findChapterBarColorWithTimestamp:(long long)a0;
- (BOOL)canAddChapterPointTimestamp:(long long)a0;
- (id)addChapterPointTimestamp:(long long)a0 desc:(id)a1 detail:(id)a2;
- (id)addChapterPointTimestamp:(long long)a0 desc:(id)a1 knowledges:(id)a2;
- (id)addChapterKnowledgeWithChapterInfo:(id)a0;
- (BOOL)removeChapterPointTimestamp:(long long)a0;
- (id)sortedChapterDetails;
- (id)addChapterBarColorTimestamp:(long long)a0 color:(id)a1;
- (BOOL)removeChapterBarColorTimestamp:(long long)a0;
- (id)sortedChapterBarColors;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
