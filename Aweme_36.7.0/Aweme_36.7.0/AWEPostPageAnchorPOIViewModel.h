@class AWEPostPagePOIRightDetailLabelViewModel, NSString, AWEPostPagePOIActivityViewModel, AWEPostPageAdvancedPOISettingsViewModel;

@interface AWEPostPageAnchorPOIViewModel : AWEPostPageAnchorViewModel

@property (retain, nonatomic) NSString *currentFullType;
@property (retain, nonatomic) AWEPostPagePOIActivityViewModel *activityVM;
@property (retain, nonatomic) AWEPostPagePOIRightDetailLabelViewModel *rightDetailTextVM;
@property (retain, nonatomic) AWEPostPageAdvancedPOISettingsViewModel *advancedPOISettingsVM;
@property (nonatomic) long long poiCellAccessState;

- (void).cxx_destruct;

@end
