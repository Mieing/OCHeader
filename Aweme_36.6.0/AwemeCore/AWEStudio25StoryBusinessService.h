@class NSString;
@protocol AWEStudio25StoryFireMenServiceProtocol, AWEStudio25StoryMusicServiceProtocol, AWEStudio25StorySparkServiceProtocol;

@interface AWEStudio25StoryBusinessService : NSObject <AWEStudio25StoryBusinessServiceProtocol>

@property (readonly, nonatomic) id<AWEStudio25StoryMusicServiceProtocol> music;
@property (readonly, nonatomic) id<AWEStudio25StorySparkServiceProtocol> spark;
@property (readonly, nonatomic) id<AWEStudio25StoryFireMenServiceProtocol> fireMen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShowPublishProgressViewWithTask:(id)a0;
- (void).cxx_destruct;

@end
