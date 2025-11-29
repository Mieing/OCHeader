@class NSDictionary, NSString;

@interface AWELiveWebShareModel : NSObject

@property (nonatomic) BOOL isLiveShare;
@property (nonatomic) long long liveShareType;
@property (nonatomic) BOOL needPoster;
@property (retain, nonatomic) NSDictionary *posterData;
@property (nonatomic) BOOL needLogin;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *platform;
@property (retain, nonatomic) NSDictionary *liveShareExtraParams;
@property (nonatomic) BOOL isPreLive;
@property (retain, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;
- (id)initWithParams:(id)a0;

@end
