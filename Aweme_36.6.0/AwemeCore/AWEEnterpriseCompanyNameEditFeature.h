@class NSString, AWEEnterpriseCompanyNameEditConfiguration, UICollectionView, NSMutableArray;

@interface AWEEnterpriseCompanyNameEditFeature : AWEFeature <UICollectionViewDataSource, UICollectionViewDelegate, AWEEnterpriseCompanyNameEditProtocol>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEEnterpriseCompanyNameEditConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *selectedImages;

+ (id)aliasName;

- (void)deleteImageTaped:(id)a0;
- (void)p_pickerImage;
- (id)formatRichText:(id)a0;
- (void)imageAduitSubmit:(id)a0 inScene:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (unsigned long long)featureType;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)view;
- (void)uploadImage:(id /* block */)a0;

@end
