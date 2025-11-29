@class NSString;

@interface AWEFeedNearbyCardFrequencyManager : NSObject

@property (nonatomic) BOOL hadExposedInAppCycle;
@property (copy, nonatomic) NSString *mallCardPoiId;
@property (copy, nonatomic) NSString *shopCardPoiId;
@property (nonatomic) BOOL isShopCardExposedInFeed;
@property (nonatomic) BOOL isMallCardExposedInFeed;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)mallCardRecordFrequency;
- (id)mallCardFrequencyMsgWithModel:(id)a0;
- (void)shopCardRecordFrequency;
- (id)shopCardFrequencyMsgWithModel:(id)a0;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
