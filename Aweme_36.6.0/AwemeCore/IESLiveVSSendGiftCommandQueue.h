@class NSString, NSMutableDictionary, NSDictionary, NSMutableArray, NSNumber;
@protocol IESLiveVSSendGiftCommandQueueDelegate, IESLiveVSSendGiftCommandExcutor;

@interface IESLiveVSSendGiftCommandQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL endTag;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL firstSuccessTag;
@property (retain, nonatomic) NSString *t_toUserID;
@property (retain, nonatomic) NSNumber *t_giftID;
@property (retain, nonatomic) NSNumber *t_giftCnt;
@property (retain, nonatomic) NSMutableDictionary *t_giftInfo;
@property (retain, nonatomic) NSNumber *t_money;
@property (nonatomic) unsigned long long successTimes;
@property (nonatomic) BOOL hasSendGift;
@property (weak, nonatomic) id<IESLiveVSSendGiftCommandExcutor> executor;
@property (weak, nonatomic) id<IESLiveVSSendGiftCommandQueueDelegate> delegate;
@property (retain, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) id /* block */ didCreateReport;
@property (copy, nonatomic) id /* block */ didStart;
@property (copy, nonatomic) id /* block */ didEnd;

- (void)forceEnd;
- (void)appendCommand:(id)a0;
- (void)executeNextCommand;
- (void)handleFinishCommand:(id)a0 error:(id)a1 shouldEnd:(BOOL *)a2;
- (void)handleSuccessCommand:(id)a0;
- (void).cxx_destruct;
- (void)willEnd;
- (void)report;
- (id)init;
- (void)commit;
- (void)run;
- (void)end;
- (void)executeCommand:(id)a0;

@end
