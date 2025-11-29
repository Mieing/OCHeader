@class NSString, AWEPadPolymericChannelSlidableSectionViewModel;

@interface AWEPadPolymericChannelSlidableSectionController : AWEPadHorizontalSectionController <AWEBaseListViewControllerDataSource>

@property (readonly, nonatomic) AWEPadPolymericChannelSlidableSectionViewModel *viewModel;
@property (nonatomic) BOOL hasTrackSlide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;
+ (Class)aAWEPadModuleAdapterClass;

@end
