@class UIColor, NSString, HTSLiveImage, NSNumber;

@interface IESLiveGiftBuffCardConfig : NSObject

@property (nonatomic) int buffLevel;
@property (nonatomic) long long buffGiftId;
@property (retain, nonatomic) NSNumber *originGiftId;
@property (nonatomic) long long index;
@property (nonatomic) BOOL unlocked;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL shouldShimmer;
@property (retain, nonatomic) HTSLiveImage *basicImage;
@property (retain, nonatomic) NSString *remainTimeText;
@property (retain, nonatomic) NSString *lockedText;
@property (retain, nonatomic) NSString *infoText;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) HTSLiveImage *shimmerImage;

- (void)recordConfigLog;
- (void).cxx_destruct;
- (id)init;

@end
