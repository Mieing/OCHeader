@class AFDNewSchoolStoryContainerTrackInfo;

@interface AFDNewSchoolStoryContainerTracker : NSObject

@property (nonatomic) unsigned long long currentExitMethodType;
@property (retain, nonatomic) AFDNewSchoolStoryContainerTrackInfo *trackInfo;

- (void)trackEnterPage;
- (void)trackExitWithType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
