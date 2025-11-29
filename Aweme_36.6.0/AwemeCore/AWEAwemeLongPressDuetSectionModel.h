@interface AWEAwemeLongPressDuetSectionModel : AFDLongPressBaseSectionViewModel

@property (nonatomic) BOOL hasLinkedModels;

- (void)linkModelsIfNeeded;
- (void)createDuetVideo;
- (long long)linkModelsIfNeededAndGetNumberOfModels;

@end
