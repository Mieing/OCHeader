@class ACCRecordCaptionListConfig, NSString, NSArray, AWEVideoPublishViewModel;

@interface ACCRecordCaptionListViewModel : AWEBaseListViewModel

@property (retain, nonatomic) ACCRecordCaptionListConfig *config;
@property (nonatomic) long long selectedIndex;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) NSArray *originCaptions;
@property (copy, nonatomic) NSArray *captions;
@property (nonatomic) double startTimeMS;
@property (nonatomic) double clipDurationMS;
@property (nonatomic) BOOL forceFullySelected;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;

- (void)reloadList;
- (void)updateSelectedIndex:(long long)a0;
- (void)fontSizeDidChange;
- (void)onChangeMusic:(id)a0;
- (void)onChangeStartTimeMS:(double)a0 clipDurationMS:(double)a1;
- (void)updateForceFullySelected:(BOOL)a0;
- (void)onTimeUpdate:(double)a0 completion:(id /* block */)a1;
- (void)resetStartTimeAndDuration;
- (id)cellViewModelAtIndex:(long long)a0;
- (void)fetchListDataOnMusicChange:(id)a0;
- (void)updateCellViewModelsForceFullySelected:(BOOL)a0 sectionViewModelsArray:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
