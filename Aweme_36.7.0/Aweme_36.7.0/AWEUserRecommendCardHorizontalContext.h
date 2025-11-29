@class UIFont, AWEUserRecommendCardBaseCellViewConfig;

@interface AWEUserRecommendCardHorizontalContext : NSObject

@property (nonatomic) double leftInset;
@property (retain, nonatomic) UIFont *headerFont;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (nonatomic) double cardSpacing;
@property (retain, nonatomic) AWEUserRecommendCardBaseCellViewConfig *cardConfig;

- (void).cxx_destruct;
- (id)init;

@end
