@class NSString, NSDictionary;

@interface BDXLynxVideoProModel : NSObject

@property (retain, nonatomic) NSString *propsSrc;
@property (retain, nonatomic) NSString *propsPoster;
@property (nonatomic) BOOL propsAutoplay;
@property (nonatomic) BOOL propsLoop;
@property (nonatomic) double propsInitTime;
@property (nonatomic) long long propsRate;
@property (nonatomic) BOOL propsAutoLifeCycle;
@property (retain, nonatomic) NSString *propsTag;
@property (nonatomic) long long propsCacheSize;
@property (nonatomic) BOOL initMuted;
@property (retain, nonatomic) NSString *objectfit;
@property (retain, nonatomic) NSString *preloadKey;
@property (retain, nonatomic) NSDictionary *header;
@property (retain, nonatomic) NSString *playAuthDomain;
@property (retain, nonatomic) NSString *playAuthToken;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *playUrlString;
@property (retain, nonatomic) NSDictionary *videoModel;

- (id)copy;
- (void).cxx_destruct;

@end
