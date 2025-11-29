@class NSArray, AWEUserCenterWhoCanMessageMeDataController;

@interface AWEUserCenterWhoCanMessageMeSettingViewModel : AWESettingBaseViewModel {
    NSArray *_sectionDataArray;
}

@property (retain, nonatomic) AWEUserCenterWhoCanMessageMeDataController *dataController;

- (id)configSectionDataArray;
- (id)sectionDataArray;
- (void)setSectionDataArray:(id)a0;
- (void).cxx_destruct;

@end
