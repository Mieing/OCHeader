@class AFDNewSchoolStoryContainerContext, AFDNewSchoolStoryContainerTracker, NSObject;
@protocol AFDSchoolStoryContainerDataSource, AFDNewSchoolStoryContainerViewModelDelegate;

@interface AFDNewSchoolStoryContainerViewModel : NSObject

@property (weak, nonatomic) NSObject<AFDNewSchoolStoryContainerViewModelDelegate> *delegate;
@property (retain, nonatomic) NSObject<AFDSchoolStoryContainerDataSource> *dataAgent;
@property (nonatomic) BOOL didFetchContainerData;
@property (retain, nonatomic) AFDNewSchoolStoryContainerContext *containerContext;
@property (retain, nonatomic) AFDNewSchoolStoryContainerTracker *tracker;

- (void)shoot;
- (void)injectDataAgent:(id)a0;
- (void)fetchSchoolStoryBasicInfo;
- (id)shootButtonIconName;
- (id)shootButtonTitle;
- (BOOL)isWhiteStyleShootButton;
- (void)trackShootButton:(unsigned long long)a0;
- (id)trackButtonType;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
