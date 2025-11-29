@class NSArray, NSString;

@interface WCFinderContentCarouselViewModel : NSObject

@property (nonatomic) BOOL showCarousel;
@property (nonatomic) unsigned long long curCarouselType;
@property (nonatomic) double carouselExposeStartTime;
@property (nonatomic) double carouselInterval;
@property (nonatomic) BOOL hasCompleteCarouselMediaComment;
@property (nonatomic, getter=hasCancelCarouselMediaComment) BOOL cancelCarouselMediaComment;
@property (retain, nonatomic) NSArray *carouselHotCommentList;
@property (retain, nonatomic) NSArray *carouselMediaCommentList;
@property (nonatomic) unsigned long long totalImageCommentCount;
@property (retain, nonatomic) NSArray *carouselJumpInfoList;
@property (copy, nonatomic) NSString *regardfulCarouselString;
@property (nonatomic) int carouselOptionFlag;
@property (nonatomic) BOOL hasTouchCell;
@property (nonatomic) BOOL hadShowRegardfulCarsouselTips;
@property (nonatomic) BOOL headerViewCantShowRegardfulCarsouselTips;
@property (nonatomic) BOOL jumpCarouselHighPriorty;

- (void)reset;
- (struct CGSize { double x0; double x1; })commentMediaDisplaySize:(id)a0;
- (struct CGSize { double x0; double x1; })adjustedImageSizeForOriginalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })adjustedEmojiSizeForOriginalSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
