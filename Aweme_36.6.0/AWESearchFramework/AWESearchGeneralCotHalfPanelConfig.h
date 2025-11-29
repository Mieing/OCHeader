@class NSString, AWETrackerContext;

@interface AWESearchGeneralCotHalfPanelConfig : NSObject

@property (retain, nonatomic) NSString *originKeyword;
@property (retain, nonatomic) NSString *cacheKey;
@property (nonatomic) BOOL userEnableAI;
@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) NSString *enterFromSecond;
@property (retain, nonatomic) NSString *lastFeedID;
@property (retain, nonatomic) NSString *originEnterFrom;
@property (nonatomic) BOOL aiButtonStatus;
@property (copy, nonatomic) NSString *aiButtonType;
@property (retain, nonatomic) AWETrackerContext *trackerContext;
@property (retain, nonatomic) NSString *clarifiedQuery;

- (void).cxx_destruct;

@end
