@class IESECGoodsCommentModel, NSString;

@interface IESECGoodsCommentViewModel : NSObject

@property (nonatomic) long long commentViewStyle;
@property (retain, nonatomic) IESECGoodsCommentModel *goodsComment;
@property (copy, nonatomic) NSString *goodCommentCountStr;
@property (readonly, nonatomic) BOOL shouldShowVideoCommentView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } carouselCellSize;

- (void).cxx_destruct;

@end
