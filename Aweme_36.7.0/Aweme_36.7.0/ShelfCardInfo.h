@class NSString, NSMutableArray, ProductInfo;

@interface ShelfCardInfo : IESLivePBBaseMessage

@property (nonatomic) long long showIndex;
@property (nonatomic) long long cardId;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *defaultTitle;
@property (copy, nonatomic) NSString *defaultCoverURL;
@property (copy, nonatomic) NSString *customizedTitle;
@property (copy, nonatomic) NSString *customizedCoverURL;
@property (retain, nonatomic) NSMutableArray *imageArray;
@property (readonly, nonatomic) unsigned long long imageArray_Count;
@property (copy, nonatomic) NSString *sourcePage;
@property (nonatomic) int reviewStatus;
@property (nonatomic) BOOL fromReview;
@property (nonatomic) BOOL canModifyCover;
@property (nonatomic) long long status;
@property (nonatomic) int cardSource;
@property (copy, nonatomic) NSString *createInfo;
@property (copy, nonatomic) NSString *reviewResultReason;
@property (nonatomic) int reviewTitleStatus;
@property (copy, nonatomic) NSString *reviewingTitle;
@property (copy, nonatomic) NSString *lastPassTitle;
@property (copy, nonatomic) NSString *lastPassImg;
@property (retain, nonatomic) ProductInfo *productInfo;
@property (nonatomic) BOOL hasProductInfo;
@property (nonatomic) int priority;
@property (nonatomic) int topReason;
@property (nonatomic) int showDuration;
@property (nonatomic) BOOL isLeadsComponent;
@property (nonatomic) BOOL isPlayLet;
@property (copy, nonatomic) NSString *sellingPoint;
@property (copy, nonatomic) NSString *textPosterURL;
@property (copy, nonatomic) NSString *textPosterTitle;
@property (copy, nonatomic) NSString *screenShotURL;
@property (copy, nonatomic) NSString *preSetCardURL;
@property (nonatomic) int customizedCoverType;
@property (nonatomic) int selectCoverType;
@property (retain, nonatomic) NSMutableArray *auditInfoListArray;
@property (readonly, nonatomic) unsigned long long auditInfoListArray_Count;
@property (copy, nonatomic) NSString *logExtra;

+ (id)descriptor;

- (void)setShowIndex:(long long)a0;
- (long long)showIndex;
- (id)memoryData;
- (BOOL)isReviewing;
- (id)audienceCoverImageType:(BOOL)a0;
- (BOOL)isProductCard;
- (BOOL)isCoverPassed;
- (BOOL)isCoverReject;
- (BOOL)isCoverWaitForReview;
- (BOOL)isCoverReviewing;
- (id)anchorCoverImageUrl;
- (id)reviewRejectReason;
- (id)audienceCoverImageUrl:(BOOL)a0;
- (id)dictWithoutRoomID:(id)a0;
- (int)coverReviewStatus;
- (id)audienceCoverImageUrlString:(BOOL)a0;
- (id)anchorCoverImageUrlString;
- (BOOL)isEqualCardInfo:(id)a0;
- (id)initWithShelfCardInfo:(id)a0;

@end
