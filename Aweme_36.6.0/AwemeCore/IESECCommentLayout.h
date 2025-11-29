@class NSArray, NSString;
@protocol IESECCommentNCellLayoutSizeDelegate;

@interface IESECCommentLayout : UICollectionViewLayout <IESECCommentLayoutProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } impressRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } noticeRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaAreaRect;
@property (copy, nonatomic) NSArray *layoutAttributes;
@property (weak, nonatomic) id<IESECCommentNCellLayoutSizeDelegate> sizeDelegate;
@property (nonatomic) BOOL shouldCompleteLayout;
@property (nonatomic) struct CGPoint { double x; double y; } statPoint;
@property (nonatomic) BOOL shouldShowMeaninglessFooter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isImpressTagSuspendWithIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;

@end
