@class FinderMusicTopicInfo;

@interface WCFinderMusicEventHeaderRecommendListVM : NSObject

@property (retain, nonatomic) FinderMusicTopicInfo *musicTopicInfo;

+ (unsigned long long)dataCountOfMusicTopicInfo:(id)a0;
+ (unsigned long long)recommendMusicListCountOfMusicTopicInfo:(id)a0;
+ (unsigned long long)templateListCountOfMusicTopicInfo:(id)a0;

- (void)updateWithMusicTopicInfo:(id)a0;
- (unsigned long long)dataCount;
- (unsigned long long)recommendMusicListCount;
- (unsigned long long)templateListCount;
- (id)dataAtIndex:(unsigned long long)a0;
- (BOOL)isRecommendMusicIndex:(unsigned long long)a0;
- (id)recommendMusicOfIndex:(unsigned long long)a0;
- (BOOL)isTemplateIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
