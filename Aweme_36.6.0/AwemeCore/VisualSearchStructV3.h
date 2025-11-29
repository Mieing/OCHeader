@class NSString;

@interface VisualSearchStructV3 : GPBMessage

@property (nonatomic) BOOL isShowEntrance;
@property (nonatomic) BOOL hasIsShowEntrance;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (nonatomic) int visualSearchLongpress;
@property (nonatomic) BOOL hasVisualSearchLongpress;
@property (nonatomic) BOOL isShowImgEntrance;
@property (nonatomic) BOOL hasIsShowImgEntrance;
@property (nonatomic) BOOL isEcomImg;
@property (nonatomic) BOOL hasIsEcomImg;
@property (nonatomic) BOOL isHighAccuracyEcom;
@property (nonatomic) BOOL hasIsHighAccuracyEcom;
@property (nonatomic) BOOL isHighRecallEcom;
@property (nonatomic) BOOL hasIsHighRecallEcom;

+ (id)descriptor;

- (BOOL)isHighRecallEcom;
- (BOOL)isHighAccuracyEcom;
- (BOOL)isEcomImg;
- (BOOL)isShowImgEntrance;
- (int)visualSearchLongpress;
- (BOOL)isShowEntrance;

@end
