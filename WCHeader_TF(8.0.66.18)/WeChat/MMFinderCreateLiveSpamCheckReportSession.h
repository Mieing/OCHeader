@class NSString;

@interface MMFinderCreateLiveSpamCheckReportSession : NSObject

@property (nonatomic) unsigned long long enterTimestamp;
@property (retain, nonatomic) NSString *pageId;
@property (retain, nonatomic) NSString *finderUserName;
@property (nonatomic) int scene;

- (id)initWithScene:(int)a0 pageId:(id)a1;
- (void)reportEntering;
- (void)reportLeaving;
- (void)reportExposeEid:(id)a0;
- (void)reportClickEid:(id)a0;
- (void).cxx_destruct;

@end
