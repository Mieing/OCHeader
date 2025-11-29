@class NSTimer, NSArray;

@interface EcsFinderFeedPopupViewModel : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (readonly, nonatomic) NSArray *popupInfos;
@property (readonly, nonatomic) NSArray *popupInfosVM;
@property (readonly, nonatomic) long long currentIndex;
@property (readonly, nonatomic) long long edgeTop;
@property (readonly, nonatomic) long long cellHeight;
@property (readonly, nonatomic) long long cellSpace;
@property (readonly, nonatomic) long long viewHeight;
@property (readonly, nonatomic) long long offsetY_alpha0;
@property (readonly, nonatomic) long long offsetY_alpha1;
@property (copy, nonatomic) id /* block */ onScrollToIndex;

+ (id)createWithPopupInfos:(id)a0;

- (id)initWithPopupInfos:(id)a0;
- (void)setPopupInfos:(id)a0;
- (void)startScroll;
- (void)onScrollToIndexDone;
- (void)stopScroll;
- (void)setCurrentIndex:(long long)a0;
- (long long)cellTopForIndex:(long long)a0;
- (void).cxx_destruct;

@end
