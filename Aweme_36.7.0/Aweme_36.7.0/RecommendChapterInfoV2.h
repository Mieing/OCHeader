@class NSString, NSMutableArray, GPBInt32Array;

@interface RecommendChapterInfoV2 : GPBMessage

@property (retain, nonatomic) NSMutableArray *recommendChapterListArray;
@property (readonly, nonatomic) unsigned long long recommendChapterListArray_Count;
@property (nonatomic) int chapterRecommendType;
@property (nonatomic) BOOL hasChapterRecommendType;
@property (nonatomic) int generationStatus;
@property (nonatomic) BOOL hasGenerationStatus;
@property (copy, nonatomic) NSString *chapterAbstract;
@property (nonatomic) BOOL hasChapterAbstract;
@property (nonatomic) int chapterRecommendSource;
@property (nonatomic) BOOL hasChapterRecommendSource;
@property (retain, nonatomic) GPBInt32Array *pushSceneArray;
@property (readonly, nonatomic) unsigned long long pushSceneArray_Count;
@property (retain, nonatomic) NSMutableArray *chapterBarColorArray;
@property (readonly, nonatomic) unsigned long long chapterBarColorArray_Count;

+ (id)descriptor;

@end
