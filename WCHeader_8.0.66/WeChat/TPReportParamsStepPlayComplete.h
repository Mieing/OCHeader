@class NSString;

@interface TPReportParamsStepPlayComplete : NSObject <ITPReportParams>

@property (nonatomic) unsigned long long reason;
@property (nonatomic) long long etime;
@property (nonatomic) double playduration;
@property (retain, nonatomic) NSString *code;
@property (nonatomic) long long scount;
@property (nonatomic) long long tbcount;
@property (nonatomic) long long tbduration;
@property (nonatomic) long long bcount;
@property (nonatomic) long long tduration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setErrorCode:(id)a0;
- (void).cxx_destruct;

@end
