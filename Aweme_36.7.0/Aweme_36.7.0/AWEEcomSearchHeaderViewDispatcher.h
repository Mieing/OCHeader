@interface AWEEcomSearchHeaderViewDispatcher : NSObject

+ (id)headerViewClasses;
+ (void)registerSupplementaryViewForCollectionView:(id)a0;
+ (Class)headerViewClassWithModel:(id)a0;
+ (double)getGuideSearchViewHeightWithModel:(id)a0 isFromECommerce:(BOOL)a1;

@end
