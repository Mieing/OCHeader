@class NSString;

@interface TPReportParamsStepSeek : NSObject <ITPReportParams>

@property (nonatomic) long long format;
@property (nonatomic) long long pstime;
@property (nonatomic) long long petime;
@property (nonatomic) long long lstime;
@property (nonatomic) long long letime;
@property (retain, nonatomic) NSString *code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setErrorCode:(id)a0;
- (void).cxx_destruct;

@end
