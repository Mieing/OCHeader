@class AFDNewSchoolStoryFeedCellFrameContent, AWEAwemeModel;

@interface AFDNewSchoolStoryFeedCellFrameMedia : NSObject

@property (nonatomic) double initialContanierWidth;
@property (nonatomic) double contentRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } repostIconFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } repostTipFrame;
@property (retain, nonatomic) AFDNewSchoolStoryFeedCellFrameContent *originContentDescFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originContentFrame;
@property (nonatomic) struct CGSize { double width; double height; } realOriginContentSize;
@property (nonatomic) unsigned long long layoutType;
@property (retain, nonatomic) AWEAwemeModel *aweme;

- (struct CGSize { double x0; double x1; })calculateAlbumContainerSizeWithAlbumImages:(id)a0;
- (BOOL)isRepostItem;
- (BOOL)hasRepostOriginItemDeleted;
- (void)configFrameWithAweme:(id)a0 containerWidth:(double)a1 layoutType:(unsigned long long)a2 videoCutType:(long long)a3 browsedType:(unsigned long long)a4;
- (struct CGSize { double x0; double x1; })contentViewAdjustedSizeForModel:(id)a0 width:(double)a1 videoCutType:(long long)a2 layoutType:(unsigned long long)a3 browsedType:(unsigned long long)a4;
- (struct CGSize { double x0; double x1; })adaptVideoCutWithConfig:(id)a0 rawSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)init;

@end
