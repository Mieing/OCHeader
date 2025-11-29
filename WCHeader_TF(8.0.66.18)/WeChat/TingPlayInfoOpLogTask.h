@interface TingPlayInfoOpLogTask : NSObject

@property (nonatomic) unsigned int eventId;
@property (nonatomic) BOOL isOn;

+ (id)oplogInfoWithEventID:(unsigned int)a0 targetStatus:(BOOL)a1;

- (void)handleOplogFail;
- (void)handleOplogSuccess;

@end
