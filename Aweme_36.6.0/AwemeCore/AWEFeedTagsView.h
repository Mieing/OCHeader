@class NSMutableArray;

@interface AWEFeedTagsView : UIView

@property (retain, nonatomic) NSMutableArray *URLs;
@property (retain, nonatomic) NSMutableArray *imageViewPool;
@property (nonatomic) double cachedContentSize;
@property (nonatomic) double tagViewWidth;

+ (BOOL)enableLabelLargeFontAdapt;

- (void)_configureViewWithURLs:(id)a0;
- (void)_recycleImageView:(id)a0;
- (id)_deququeImageView;
- (void)addImageURLAtEnd:(id)a0;
- (void)removeURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)addImageURL:(id)a0;
- (void)setImageURLs:(id)a0;
- (id)_createImageView;

@end
