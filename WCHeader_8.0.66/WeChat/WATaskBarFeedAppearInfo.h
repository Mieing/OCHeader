@class NSString;

@interface WATaskBarFeedAppearInfo : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long appearType;
@property (nonatomic) unsigned long long pageType;
@property (retain, nonatomic) NSString *contentId;
@property (nonatomic) unsigned long long contentStatus;
@property (nonatomic) unsigned long long page;
@property (retain, nonatomic) NSString *iconAppId;
@property (retain, nonatomic) NSString *extraData;
@property (nonatomic) unsigned long long pageFeedIndex;
@property (nonatomic) unsigned long long isRefresh;
@property (retain, nonatomic) NSString *userName;

- (void).cxx_destruct;

@end
