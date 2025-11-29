@class NSString;

@interface AWEStudioServiceContainerDYAdapter : NSObject <AWEStudioServiceContainerCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)editorTemplateImplementation;
- (id)albumEditorTemplateImplementation;
- (id)richTextEditorTemplateImplementation;
- (id)birthdayPostEditorTemplateImplementation;
- (id)resourceBundleImplementation;
- (id)editBarSortSourceImplementation:(BOOL)a0 isFromIM:(BOOL)a1 supportEditPublish:(BOOL)a2;
- (id)editBarItemResourceConfigManager:(BOOL)a0 isNewReplaceMusicStyle:(BOOL)a1 enableStoryStyle:(BOOL)a2 supportEditPublish:(BOOL)a3;
- (id)weakTarget;

@end
