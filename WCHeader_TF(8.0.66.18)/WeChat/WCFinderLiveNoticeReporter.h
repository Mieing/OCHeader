@interface WCFinderLiveNoticeReporter : NSObject

+ (void)reportProfileLiveNotice:(unsigned long long)a0 withNoticeInfo:(id)a1 actionJsonDictionary:(id)a2 sourceScene:(unsigned long long)a3;
+ (void)reportProfileLiveNotice:(unsigned long long)a0 withNoticeInfo:(id)a1 actionJsonDictionary:(id)a2 sourceScene:(unsigned long long)a3 sessionId:(id)a4;
+ (void)reportProfileNoticeOk:(unsigned long long)a0 withNoticeInfo:(id)a1 sourceScene:(unsigned long long)a2 sessionId:(id)a3;

@end
