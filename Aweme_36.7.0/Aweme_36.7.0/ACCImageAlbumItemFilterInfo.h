@class NSNumber, NSString;

@interface ACCImageAlbumItemFilterInfo : ACCImageAlbumItemVEResourceRestorableModel

@property (retain, nonatomic) NSNumber *filterIntensityRatio;
@property (retain, nonatomic) NSNumber *slideRatio;
@property (copy, nonatomic) NSString *filterName;

- (BOOL)didInfosChangedWithTarget:(id)a0;
- (void)deepCopyValuesIfNeedFromTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidFilter;

@end
