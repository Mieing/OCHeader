@class NSString, AWEStudioRepoIMModel;

@interface AWEIMVideoEditorTemplate : NSObject <ACCBusinessTemplate>

@property (weak, nonatomic) AWEStudioRepoIMModel *repoIM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentClasses;
- (id)componentPluginClasses;
- (id)commonComponentClasses;
- (id)initWithRepoIM:(id)a0;
- (void).cxx_destruct;

@end
