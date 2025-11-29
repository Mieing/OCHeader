@class NSString, NSMutableDictionary, NSArray, NSDictionary, NSMutableArray;

@interface EEUIAnnotationParser : NSObject

@property (readonly, nonatomic) NSMutableDictionary *categoryDict;
@property (nonatomic) struct shared_ptr<EffectTemplateEditor::UIAnnotationParser> { struct UIAnnotationParser *__ptr_; struct __shared_weak_count *__cntrl_; } annotationParserPtr;
@property (copy, nonatomic) NSString *stickerPath;
@property (copy, nonatomic) NSString *localePath;
@property (retain, nonatomic) NSMutableArray *categoryArray;
@property (retain, nonatomic) NSMutableDictionary *categoryDict;
@property (retain, nonatomic) NSArray *annotations;
@property (retain, nonatomic) NSDictionary *changedContentsForOriginal;
@property (retain, nonatomic) NSDictionary *changedContentsForLast;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) NSDictionary *changedContents;

+ (Class)classWithUIType:(int)a0;
+ (id)uiClassMap;
+ (void)injectUIAnnotationClass:(Class)a0 withUIType:(int)a1;
+ (void)initialize;

- (id)initWithStickerPath:(id)a0 localePath:(id)a1;
- (void)setStickerPath:(id)a0 localePath:(id)a1;
- (void)checkChangedContents;
- (id)changedContentsWithBlock:(id /* block */)a0;
- (id)parsingUIAnnotationsWithErrorCode:(int *)a0;
- (int)parsingUIAnnotations;
- (int)saveStickerWithDestination:(id)a0;
- (id)initWithStickerPath:(id)a0;
- (id)getTags;
- (void)parsingUIAnnotationsWithSuccess:(id /* block */)a0 andError:(id /* block */)a1;
- (id)annotationsWithUIType:(int)a0;
- (void)saveStickerWithDestination:(id)a0 success:(id /* block */)a1 andError:(id /* block */)a2;
- (void)addTag:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (void)hasTag:(id)a0;
- (void)removeTag:(id)a0;

@end
