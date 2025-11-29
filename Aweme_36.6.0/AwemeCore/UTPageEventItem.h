@class NSString, NSMutableDictionary, NSURL;

@interface UTPageEventItem : NSObject

@property long long pageAppearTime;
@property (retain) NSString *pageRefer;
@property (retain) NSString *pageName;
@property BOOL isSkip;
@property BOOL isH52001;
@property BOOL hasAppeared;
@property (retain) NSMutableDictionary *pageProperties;
@property (retain) NSURL *pageUrl;

- (void)refreshWhenSwitchBackGround;
- (void)refreshWhenSwitchForeGround;
- (void).cxx_destruct;
- (id)init;

@end
