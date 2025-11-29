@class IESLiveGuideAudioSubScenePickerViewConfig, NSString;
@protocol IESLiveGuideAudioSubScenePickerViewDelegate;

@interface IESLiveGuideAudioSubScenePickerView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) IESLiveGuideAudioSubScenePickerViewConfig *config;
@property (weak, nonatomic) id<IESLiveGuideAudioSubScenePickerViewDelegate> pickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectedSubScene:(unsigned long long)a0;
- (BOOL)shouldShowPicker;
- (void)p_addMoreConfigWithConfig:(id)a0;
- (BOOL)isSmallScreenOrViewZoom;
- (struct CGSize { double x0; double x1; })sizeOfCell;
- (struct CGSize { double x0; double x1; })sizeOfContent;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (id)initWithConfig:(id)a0 delegate:(id)a1;

@end
