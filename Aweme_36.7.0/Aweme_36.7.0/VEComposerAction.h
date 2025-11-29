@interface VEComposerAction : NSObject <NSCopying> {
    struct VEComposerFilterParam { int mode; int orderType; int action; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } oldNodePaths; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } nodePaths; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } tags; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } updateNodeKeys; struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } updateNodeValues; } param;
}

@property (readonly, nonatomic) unsigned long long action;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long countOldNodePaths;

+ (id)setComposerMode:(int)a0 orderType:(int)a1;
+ (id)appendComposerNodes:(id)a0;
+ (id)removeComposerNodes:(id)a0;
+ (id)reloadComposerNodes:(id)a0;
+ (id)setComposerNodes:(id)a0;
+ (id)removeAllComposerNodes;
+ (id)setComposerNodes:(id)a0 tags:(id)a1;
+ (id)appendComposerNodes:(id)a0 tags:(id)a1;
+ (id)reloadComposerNodes:(id)a0 tags:(id)a1;
+ (id)updateComposerNode:(id)a0 nodeKey:(id)a1 nodeValue:(float)a2;
+ (id)updateMultipleComposerNode:(id)a0 nodeKeys:(id)a1 nodeValues:(id)a2;
+ (id)replaceComposerNode:(id)a0 nodeKeys:(id)a1 nodeValues:(id)a2;

- (const char **)nodePaths_cstr;
- (const char **)tags_cstr;
- (const char **)oldNodePaths_cstr;
- (const char **)updateNodeKeys_cstr;
- (float *)updateNodeValues_cstr;
- (void).cxx_destruct;
- (void)clear;
- (id)description;
- (id)init;
- (id).cxx_construct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
