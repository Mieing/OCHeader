@interface AWEPOIDetailFeedUgcPhotosConfig : NSObject

@property (nonatomic) long long maxPhotoCount;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic) double photoRadius;
@property (nonatomic) BOOL radiusOnOuterOnly;
@property (nonatomic) double maxWidth;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double singlePhotoSize;
@property (nonatomic) BOOL hiddenCountTipView;
@property (nonatomic) double containerWidth;

- (id)initWithContainerWidth:(double)a0;
- (id)init;

@end
