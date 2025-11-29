@class NSNumber, NSString;

@interface IESECGoodsCommentHeaderConfig : NSObject

@property (nonatomic) BOOL showShareButton;
@property (nonatomic) BOOL showAddToCartButton;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL showCollectButton;
@property (nonatomic) BOOL isCollected;
@property (retain, nonatomic) NSNumber *shopCartCount;
@property (copy, nonatomic) NSString *mainTitle;
@property (nonatomic) BOOL showOldStyle;
@property (nonatomic) BOOL hideLeftTitle;
@property (nonatomic) BOOL isSaasForceBFF;

- (void).cxx_destruct;
- (id)init;

@end
