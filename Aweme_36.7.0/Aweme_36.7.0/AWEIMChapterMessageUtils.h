@interface AWEIMChapterMessageUtils : NSObject

+ (id)getChapterMessageModel:(id)a0;
+ (void)setChapterMessageModel:(id)a0 uniqueId:(id)a1;
+ (BOOL)awemeAvailableWithID:(long long)a0;
+ (id)awemeTitleWithID:(long long)a0;
+ (BOOL)awemeAvailableWithStrId:(id)a0;
+ (long long)chapterAvailableWithID:(long long)a0 chapterIndex:(long long)a1;
+ (id)chapterInfoWithID:(long long)a0 chapterIndex:(long long)a1;
+ (BOOL)updateAwemeStateWithAwemeId:(id)a0 unavailable:(BOOL)a1;
+ (void)updateAwemeTitle:(id)a0 forID:(id)a1;

@end
