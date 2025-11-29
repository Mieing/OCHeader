@class NSString, NSDictionary, NSData, RPManagerTool;

@interface RPReadPassport : NSObject {
    int counts;
}

@property (copy, nonatomic) NSString *passportNumber;
@property (copy, nonatomic) NSString *dateOfBirth;
@property (copy, nonatomic) NSString *expiryDate;
@property (copy, nonatomic) id /* block */ rpResult;
@property (retain, nonatomic) NSDictionary *dgData;
@property (retain, nonatomic) NSData *imgData;
@property (retain, nonatomic) RPManagerTool *tool;
@property (nonatomic) long long readerCount;
@property (copy, nonatomic) NSString *longReqid;
@property (copy, nonatomic) NSString *shortReqid;
@property (nonatomic) double startTime;
@property (nonatomic) long long reqidType;
@property (nonatomic) long long reTryTimes;
@property (nonatomic) long long timeouts;
@property (copy, nonatomic) NSString *strCid;
@property (nonatomic) BOOL isHttp;
@property (nonatomic) BOOL isProgress;
@property (copy, nonatomic) id /* block */ readerPassportCanceled;

+ (id)sharedInstance;

- (int)sendFirstHttp;
- (void)sendLastDataWithErrCode:(int)a0 withSodFile:(id)a1;
- (void)verifyData:(id)a0 withTime:(double)a1;
- (void)showLoadHUDMsg:(id)a0;
- (id)getUTCFormatDate:(id)a0 formatStr:(id)a1;
- (void)httpVerifyData:(id)a0 withTime:(double)a1;
- (void)tcpVerifyData:(id)a0 withTime:(double)a1;
- (void)hideLoadHUD;
- (void)readPassportWithPassportNumber:(id)a0 birth:(id)a1 date:(id)a2 withIsImg:(BOOL)a3 result:(id /* block */)a4;
- (void).cxx_destruct;
- (id)stringToDate:(id)a0;

@end
