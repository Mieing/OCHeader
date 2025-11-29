@class AWEPadHistorySectionDataController;

@interface AWEPadPolymericChannelHistorySectionViewModel : AWEPadPolymericChannelSlidableSectionViewModel

@property (nonatomic) BOOL customCanShow;
@property (retain, nonatomic) AWEPadHistorySectionDataController *dataController;

+ (id)viewModelWithModelsArray:(id)a0;

- (BOOL)canShow;
- (void)fetchHistoryData;
- (void).cxx_destruct;
- (id)sectionBackgroundColor;

@end
