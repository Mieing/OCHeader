@class NSData, BizErrInfo;

@interface IESLiveBackendBizResp : NSObject

@property (retain, nonatomic) NSData *pbData;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) BOOL isSuccess;
@property (retain, nonatomic) BizErrInfo *errorInfo;
@property (retain, nonatomic) id jsonData;

- (void).cxx_destruct;

@end
