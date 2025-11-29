@class NSString, NSMutableDictionary;
@protocol IESLiveProfitCheckTaskDelegate;

@interface IESLiveProfitCheckBaskTask : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long duration;
@property (nonatomic) BOOL isReported;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSString *logId;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long reportType;
@property (retain, nonatomic) NSMutableDictionary *data;
@property (retain, nonatomic) NSMutableDictionary *index;
@property (retain, nonatomic) id<IESLiveProfitCheckTaskDelegate> delegate;

- (void)reportGiftProfitCheck:(unsigned long long)a0 withUserId:(id)a1 roomId:(id)a2 data:(id)a3;
- (void)reportPrivilegeProfitCheck:(unsigned long long)a0 withUserId:(id)a1 roomId:(id)a2 data:(id)a3;
- (void)reportFrontEndProfitCheck:(unsigned long long)a0 withUserId:(id)a1 roomId:(id)a2 data:(id)a3;
- (void)reportPKProfitCheck:(unsigned long long)a0 withUserId:(id)a1 roomId:(id)a2 data:(id)a3;
- (id)initWithCheckData:(id)a0;
- (void)reportProfitCheck:(unsigned long long)a0 withUserId:(id)a1 roomId:(id)a2 data:(id)a3;
- (void).cxx_destruct;
- (id)eventName;

@end
