@class IESECCommentDataController, NSString, IESECGoodsCommentPageResponse;

@interface IESECCommentCellLayoutDelegate : NSObject <IESECCommentNCellLayoutSizeDelegate>

@property (retain, nonatomic) IESECGoodsCommentPageResponse *commentPageResponse;
@property (retain, nonatomic) IESECCommentDataController *dataController;
@property (readonly, nonatomic) double sideSpace;
@property (readonly, nonatomic) double normalHorizontalSpace;
@property (readonly, nonatomic) double normalVerticalSpace;
@property (readonly, nonatomic) double normalCellWidth;
@property (readonly, nonatomic) double impressTagBottomOffset;
@property (readonly, nonatomic) double commentListTopOffset;
@property (readonly, nonatomic) double impressTagTopOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeForNCellNewStyleWithModel:(id)a0 dataController:(id)a1 atIndex:(unsigned long long)a2;
+ (struct CGSize { double x0; double x1; })sizeForNCellNewStyleWithModel:(id)a0 dataController:(id)a1 atIndex:(unsigned long long)a2 cellWidth:(double)a3;
+ (void)setupShopReplyAttributeStringIfNeeded:(id)a0;

- (struct CGSize { double x0; double x1; })sizeForCommentItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewH:(double)a0 maxY:(double)a1;
- (struct CGSize { double x0; double x1; })sizeForImpressionTagAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeForNCellAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;

@end
