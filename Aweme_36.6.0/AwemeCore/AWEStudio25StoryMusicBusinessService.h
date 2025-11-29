@class AWEStudio25StoryMusicResourceModel, NSString, AWEStudio25StoryResourceLoadService;

@interface AWEStudio25StoryMusicBusinessService : NSObject <AWEStudio25StoryMusicServiceProtocol>

@property (retain, nonatomic) AWEStudio25StoryMusicResourceModel *musicResourceModel;
@property (retain, nonatomic) AWEStudio25StoryResourceLoadService *resourceLoadService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appendParams:(id)a0;
- (id)musicDetailPageClickStoryPublishWith:(id)a0;
- (void)configDataEnterEditPage:(id)a0;
- (void)configMusicInfoWith:(id)a0 resourceModel:(id)a1;
- (void).cxx_destruct;
- (void)execute;

@end
