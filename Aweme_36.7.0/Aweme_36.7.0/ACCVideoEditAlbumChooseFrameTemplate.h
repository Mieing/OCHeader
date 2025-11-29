@class NSString, AWEStudioComposerEditPageConfig;
@protocol AWEVideoEditTemplate;

@interface ACCVideoEditAlbumChooseFrameTemplate : NSObject <AWEVideoEditTemplate>

@property (retain, nonatomic) id<AWEVideoEditTemplate> commonTemplate;
@property (retain, nonatomic) AWEStudioComposerEditPageConfig *pageConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
