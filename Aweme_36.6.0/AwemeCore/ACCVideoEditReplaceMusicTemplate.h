@class NSString, AWEStudioComposerEditPageConfig;

@interface ACCVideoEditReplaceMusicTemplate : NSObject <AWEVideoEditTemplate>

@property (retain, nonatomic) AWEStudioComposerEditPageConfig *pageConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)componentClasses;
- (void).cxx_destruct;

@end
