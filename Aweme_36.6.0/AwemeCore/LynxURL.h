@class LynxResourceRequest, NSMutableDictionary, NSURL, NSError;

@interface LynxURL : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *redirectedURL;
@property (nonatomic) BOOL initiallyLoaded;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSURL *lastRequestUrl;
@property (retain, nonatomic) NSURL *preUrl;
@property (nonatomic) BOOL fromMemoryCache;
@property (retain, nonatomic) LynxResourceRequest *request;
@property (nonatomic) double fetchTime;
@property (nonatomic) double completeTime;
@property (nonatomic) double memoryCost;
@property (nonatomic) long long isSuccess;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) NSMutableDictionary *resourceInfo;
@property (retain, nonatomic) NSMutableDictionary *reportInfo;

- (void)updatePreviousUrl;
- (BOOL)isPreviousUrl;
- (void)updateTimeStamp:(id)a0 startRequestTime:(id)a1;
- (void)initResourceInformation;
- (void).cxx_destruct;

@end
