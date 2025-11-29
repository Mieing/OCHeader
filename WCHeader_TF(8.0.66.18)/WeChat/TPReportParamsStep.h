@class NSString;

@interface TPReportParamsStep : NSObject <ITPReportParams>

@property (nonatomic) long long stime;
@property (nonatomic) long long etime;
@property (retain, nonatomic) NSString *code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setErrorCode:(id)a0;
- (void).cxx_destruct;

@end
