@class NSString;

@interface IESECMallSkeletonViewHelper : NSObject

@property (nonatomic) long long cardCount;
@property (nonatomic) double cardRadius;
@property (copy, nonatomic) NSString *headerPlaceholder;
@property (copy, nonatomic) NSString *cardCoverPlaceholder;
@property (copy, nonatomic) NSString *cardTitlePlaceholder;
@property (nonatomic) long long itemGap;
@property (nonatomic) long long targetDuration;
@property (nonatomic) long long maxDelayJumpDuration;
@property (nonatomic) long long renderFirstScreenWaitingTimeout;
@property (nonatomic) BOOL jumpAfterImageLoaded;
@property (nonatomic) double headerPlaceholderRatio;
@property (nonatomic) double cardCoverPlaceholderRatio;
@property (nonatomic) double cardTitlePlaceholderRatio;
@property (nonatomic) BOOL needFirstScreenStraightData;
@property (nonatomic) BOOL forceLayoutEnable;
@property (nonatomic) BOOL reportFirstCardOnly;

+ (id)sharedInstance;

- (void)extractSkeletonParams;
- (id)createHeaderSectionWithHeaderPlaceHolderURL:(id)a0;
- (id)createGYLSectionWithProductImage:(id)a0 coverPlaceHolderURL:(id)a1 titlePlaceHolderURL:(id)a2;
- (id)reduceHomepageWithHeaderPlaceholder:(id)a0 productImage:(id)a1 coverPlaceholder:(id)a2 titlePlaceholder:(id)a3;
- (void).cxx_destruct;
- (id)init;

@end
