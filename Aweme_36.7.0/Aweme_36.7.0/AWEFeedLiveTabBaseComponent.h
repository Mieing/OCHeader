@class NSString, NSDictionary, FeedLiveTabData;

@interface AWEFeedLiveTabBaseComponent : NSObject <AWEFeedLiveTabBaseComponentProtocol>

@property (retain, nonatomic) id componentInfo;
@property (retain, nonatomic) NSString *tag;
@property (retain, nonatomic) NSDictionary *landingParams;
@property (retain, nonatomic) FeedLiveTabData *liveTabData;

- (void)updateComponentWith:(id)a0;
- (void)bindService;
- (void)becomeActive;
- (void).cxx_destruct;
- (id)contentView;
- (void)becomeInactive;

@end
