@class NSString;

@interface WCCommentReport : NSObject

@property (nonatomic) unsigned char mScene;
@property (nonatomic) unsigned long long endTimeMs;
@property (nonatomic) unsigned long long showTimeMs;
@property (copy, nonatomic) NSString *cacheCommentText;

+ (void)reportDeleteComment:(id)a0 with:(id)a1 confirm:(BOOL)a2;

- (id)initWith:(unsigned char)a0;
- (void)reportSendEmotion:(id)a0 with:(id)a1 andRefUsr:(id)a2;
- (void)reportCancelSendEmotion:(id)a0 with:(id)a1 andRefUsr:(id)a2;
- (void)reportSendText:(id)a0 with:(id)a1 andRefUsr:(id)a2;
- (void)reportCancelSendText:(id)a0 with:(id)a1 andRefUsr:(id)a2;
- (void).cxx_destruct;

@end
