@class NSString, NSArray;

@interface WeChat.BrandProfileRecommendFollowViewModel : NSObject {
    void /* unknown type, empty encoding */ bizusername;
    void /* unknown type, empty encoding */ bizuin;
    void /* unknown type, empty encoding */ _recommendItems;
    void /* unknown type, empty encoding */ _dataState;
    void /* unknown type, empty encoding */ _arrowAnchorPoint;
    void /* unknown type, empty encoding */ _viewHeight;
    void /* unknown type, empty encoding */ exposedCells;
    void /* unknown type, empty encoding */ recommendFollowUIView;
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ recommendUrl;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) NSString *bizusername;
@property (nonatomic) void /* unknown type, empty encoding */ scene;
@property (nonatomic, copy) NSArray *recommendItems;
@property (nonatomic) unsigned int dataState;
@property (nonatomic) double arrowAnchorPoint;

+ (id)certificationImageWithBizInfo:(id)a0;
+ (double)calculateHeight;
+ (double)calculateScrollViewHeight;

- (id)generateRecommendFollowView;
- (void)showRecommendViewAt:(double)a0;
- (id)itemAtIndex:(long long)a0;
- (double)scrollCellWidth;
- (double)scrollCellSpacing;
- (void)onMoreButtonClicked;
- (void)onCellClickedWithItem:(id)a0 pos:(long long)a1;
- (void)onCellExposedWithItem:(id)a0 pos:(long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
