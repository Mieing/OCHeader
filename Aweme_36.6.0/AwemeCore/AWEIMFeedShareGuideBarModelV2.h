@class NSArray;

@interface AWEIMFeedShareGuideBarModelV2 : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSArray *allowTypes;
@property (retain, nonatomic) NSArray *diggTypes;
@property (retain, nonatomic) NSArray *freqSwitches;
@property (nonatomic) long long freqTime;
@property (copy, nonatomic) NSArray *persistTypes;
@property (copy, nonatomic) NSArray *playOverTypes;
@property (copy, nonatomic) NSArray *playXsTypes;

- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
