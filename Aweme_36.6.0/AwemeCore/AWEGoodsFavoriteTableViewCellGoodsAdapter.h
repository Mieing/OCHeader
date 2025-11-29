@class NSString;

@interface AWEGoodsFavoriteTableViewCellGoodsAdapter : NSObject <AWEGoodsFavoriteTableViewCellAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)titleWithModel:(id)a0;
+ (id)typeTitleWithModel:(id)a0;
+ (id)descriptionTitleWithModel:(id)a0;
+ (BOOL)shouldShowPriceLabelWithModel:(id)a0;
+ (id)coverImagURLArrayWithModel:(id)a0;


@end
