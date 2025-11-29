@class NSArray;

@interface AWEIMFeedShareGuideBarModel : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) long long strategy;
@property (nonatomic) BOOL showAvatar;
@property (copy, nonatomic) NSArray *activeLevelFilter;
@property (nonatomic) long long freqHour;
@property (nonatomic) BOOL changeColorToRed;
@property (nonatomic) long long showCount;
@property (nonatomic) double exitHours;

- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
