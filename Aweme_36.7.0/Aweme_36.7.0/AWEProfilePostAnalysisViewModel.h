@class NSMutableDictionary, AWETabContainerSectionViewModel, AWEProfilePostAnalysisModel, NSDate;
@protocol AWEProfilePostAnalysisTabItemDelegate;

@interface AWEProfilePostAnalysisViewModel : AWEBaseListViewModel

@property (retain, nonatomic) AWETabContainerSectionViewModel *tabBarViewModel;
@property (retain, nonatomic) NSMutableDictionary *typeToVCMap;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) AWEProfilePostAnalysisModel *panelModel;
@property (weak, nonatomic) id<AWEProfilePostAnalysisTabItemDelegate> delegate;
@property (nonatomic) unsigned long long lastTabType;

- (void)setupViewModel;
- (long long)indexOfTabType:(unsigned long long)a0;
- (id)tabNameForType:(unsigned long long)a0;
- (id)trackCommonParams:(unsigned long long)a0;
- (id)scrollViewWithModel:(id)a0;
- (unsigned long long)tabTypeOfIndex:(long long)a0;
- (void)trackTabItemStayDuration:(unsigned long long)a0;
- (id)sheetShouldRecognizeAsynchronousScrollViewArrayOfIndex:(long long)a0;
- (id)viewControllerWithModel:(id)a0;
- (void)trackTabItemShow:(unsigned long long)a0 isDefault:(BOOL)a1;
- (id)classMaps;
- (id)tabItemModelOfIndex:(long long)a0;
- (void).cxx_destruct;

@end
