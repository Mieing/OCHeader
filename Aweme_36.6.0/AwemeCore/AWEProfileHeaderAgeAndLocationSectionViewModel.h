@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderAgeAndLocationSectionViewModel : AWEBaseListSectionViewModel <AFDSchoolStoryMessage, AWEProfileHeaderSectionViewModelProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) BOOL schoolStorySettingOn;
@property (nonatomic) BOOL personalRecommendSwitchOn;
@property (nonatomic) double personalTagHeight;
@property (readonly, nonatomic) double footerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (void)p_onPersonalRecommendChanged:(id)a0;
- (void)schoolStoryDidUpdatedUserSetting:(BOOL)a0;
- (id)padService;
- (void)refreshPersonalTagHeight:(double)a0;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
