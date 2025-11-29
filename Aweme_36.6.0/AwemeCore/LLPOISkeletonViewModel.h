@class NSArray, NSDictionary, LLPOISkeletonView, LLPOISkeletonConfigModel;
@protocol LLPOISkeletonViewDelegate;

@interface LLPOISkeletonViewModel : NSObject

@property (retain, nonatomic) LLPOISkeletonConfigModel *config;
@property (nonatomic) double parseStartTime;
@property (nonatomic) double parseDuration;
@property (nonatomic) double appearStartTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cacheFrame;
@property (nonatomic) BOOL didTrackAppear;
@property (nonatomic) BOOL didTrackDisappear;
@property (nonatomic) double cardHeight;
@property (nonatomic) double cardWidth;
@property (nonatomic) double screenHeight;
@property (nonatomic) double screenWidth;
@property (nonatomic) double globalItemCornerRadius;
@property (retain, nonatomic) NSArray *globalItemColors;
@property (nonatomic) long long globalGradientDirection;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (weak, nonatomic) LLPOISkeletonView *view;
@property (weak, nonatomic) id<LLPOISkeletonViewDelegate> delegate;

- (void)trackEvent:(id)a0 params:(id)a1;
- (id)generateConfigModelWithRawData:(id)a0;
- (void)updateExpressionResult;
- (void)didSetupSkeletonViewWithConfig:(id)a0;
- (void)skeletonViewDidShow;
- (void)skeletonViewDidDisappear;
- (void)didReceiveSkeletonRawData:(id)a0;
- (void)calculateItemFrame:(id)a0;
- (void)calculateItemRepeat:(id)a0;
- (id)generateRepeatItemsWithModel:(id)a0;
- (id)calculateExpressionResult:(id)a0;
- (void)setupGlobalConfigStyle:(id)a0 withRawData:(id)a1;
- (void)setupGlobalConfigItems:(id)a0 withRawData:(id)a1;
- (void)setupGlobalConfigPosition:(id)a0 withRawData:(id)a1;
- (void)didEndParseDataWithConfig:(id)a0;
- (id)resolveString:(id)a0 isColor:(BOOL)a1;
- (void)didReceiveErrorWithDescription:(id)a0 isFatal:(BOOL)a1;
- (id)generateItemModelWithRawData:(id)a0;
- (void)setupItemModelStyle:(id)a0 withRawData:(id)a1;
- (void)setupItemModelRepeat:(id)a0 withRawData:(id)a1;
- (id)expressionWithData:(id)a0 isColor:(BOOL)a1;
- (void).cxx_destruct;

@end
