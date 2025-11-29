@class NSString, WWKFContentSendMsgInfo, NSData;

@interface WWKFOpenExtInfo : MMObject

@property (copy, nonatomic) NSString *entityId;
@property (retain, nonatomic) WWKFContentSendMsgInfo *quickSendMsgInfo;
@property (nonatomic) BOOL bPopVCWhenLeave;
@property (retain, nonatomic) NSData *spamContext;
@property (nonatomic) BOOL showPageSheet;
@property (retain, nonatomic) NSString *finderContext;
@property (nonatomic) BOOL confirmInHalfScreen;

- (void).cxx_destruct;

@end
