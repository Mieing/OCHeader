@class NSString;

@interface MMFinderLiveCreateNoticeReporter : NSObject

@property (nonatomic) unsigned long long sourceScene;
@property (retain, nonatomic) NSString *sessionId;

- (id)initWithSourceScene:(unsigned long long)a0 sessionId:(id)a1;
- (void)reportProfileLiveNotice:(unsigned long long)a0 withNoticeInfo:(id)a1 actionJsonDictionary:(id)a2;
- (void)reportProfileNoticeOk:(unsigned long long)a0 withNoticeInfo:(id)a1;
- (void).cxx_destruct;

@end
