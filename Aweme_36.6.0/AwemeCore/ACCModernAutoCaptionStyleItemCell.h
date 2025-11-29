@class ACCTextTypeFaceCategoryView, ACCModernAutoCaptionStyleItemVerticalView;

@interface ACCModernAutoCaptionStyleItemCell : UICollectionViewCell

@property (nonatomic) long long type;
@property (retain, nonatomic) ACCTextTypeFaceCategoryView *horizonalView;
@property (retain, nonatomic) ACCModernAutoCaptionStyleItemVerticalView *verticalView;
@property (nonatomic) BOOL setuped;
@property (nonatomic) BOOL firstRender;
@property (copy, nonatomic) id /* block */ didSelectedBlk;
@property (copy, nonatomic) id /* block */ willDisplayBlk;

+ (void)registerAllCellType:(id)a0;
+ (double)cellHeightForType:(id)a0;
+ (id)identifierForType:(long long)a0;

- (void)configWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupIfNeeded:(id)a0;

@end
