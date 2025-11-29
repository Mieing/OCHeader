@interface AWEEditChapterRequestHelper : NSObject

+ (id)POST:(id)a0 params:(id)a1 modelClass:(Class)a2 completion:(id /* block */)a3;
+ (id)reeditChapterWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)p_jsonStringEncoded:(id)a0;
+ (id)reeditChapterWithItemID:(id)a0 chapterAbstract:(id)a1 chapterList:(id)a2 chapterType:(long long)a3 chapterBarColor:(id)a4 completion:(id /* block */)a5;

@end
