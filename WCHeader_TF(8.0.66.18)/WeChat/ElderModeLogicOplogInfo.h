@interface ElderModeLogicOplogInfo : NSObject

@property (nonatomic) unsigned int eventID;
@property (nonatomic) BOOL targetStatus;

+ (id)oplogInfoWithEventID:(unsigned int)a0 targetStatus:(BOOL)a1;

- (void)handleOplogFail;
- (void)handleOplogSuccess;

@end
