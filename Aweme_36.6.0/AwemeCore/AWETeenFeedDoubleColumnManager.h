@interface AWETeenFeedDoubleColumnManager : NSObject

@property (nonatomic) double doubleColumnVCEnterTimeStamp;
@property (nonatomic) double doubleColumnInnerEnterTimeStamp;

+ (id)sharedInstance;

- (void)teenmodeDoubleColumnALog:(id)a0;
- (BOOL)isDoubleColumnEnable;
- (BOOL)needRecommendReasonTagWithModel:(id)a0;
- (long long)doubleColumnType;
- (long long)bubbleGuideMaxDay;
- (id)p_doubleColumnConfig;
- (id)switchModeButtonText;
- (id)init;

@end
