@class NSString;

@interface AWEVideoCoverEditorRecentlyUsedManager : HTSService <AWEVideoCoverEditorRecentlyUsedManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildTemplatesWithTemplates:(id)a0 categoryId:(id)a1 categoryName:(id)a2;
+ (BOOL)enableRecentlyUsedWithWorkspace:(id)a0;
+ (id)mockInsertRecentlyUsedCategoryInCategories:(id)a0;
+ (void)fetchTemplatesWithRecentlyUsedCategory:(id)a0 isLandscape:(BOOL)a1 completion:(id /* block */)a2;


@end
