@class NSArray, NSNumber;

@interface AWEIMVoipNoticeViewModel : NSObject

@property (nonatomic) long long rtvType;
@property (copy, nonatomic) NSArray *rtvUserUIDs;
@property (nonatomic) BOOL isFeedSharing;
@property (readonly, nonatomic) BOOL isInGaming;
@property (readonly, nonatomic) NSNumber *maxSelectCount;

+ (id)noticeViewModelWithRTVType:(long long)a0 rtvUserUIDs:(id)a1;

- (void)updateFeedSharing:(BOOL)a0;
- (void)updateIsInGaming:(BOOL)a0;
- (void)updateMaxSelectCount:(id)a0;
- (id)makeNoticeContent;
- (void).cxx_destruct;

@end
