@class NSString, NSDictionary, TTUploadTaskParam, NSMutableArray;

@interface ResponseProtocol : NSObject

@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isOnlyLackCompletedMsg;
@property (nonatomic) BOOL isHadUploaded;
@property (nonatomic) BOOL isQueryResponse;
@property (nonatomic) BOOL isQueryTotal;
@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long unuploadedLength;
@property (nonatomic) long long partSizeMin;
@property (retain, nonatomic) NSMutableArray *needUploadRangeArray;
@property (copy, nonatomic) NSString *errorLog;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) BOOL isNotLogin;
@property (weak, nonatomic) TTUploadTaskParam *param;
@property (retain, nonatomic) NSDictionary *completedResponseDic;

+ (Class)getClass:(long long)a0;
+ (id)getResponse:(long long)a0 responseBody:(id)a1 ttnetResponse:(id)a2 param:(id)a3 backgroundResponse:(id)a4 isQueryTotal:(BOOL)a5 error:(id)a6;

- (id)initWithConfig:(id)a0 ttnetResponse:(id)a1 param:(id)a2 backgroundResponse:(id)a3 isQueryTotal:(BOOL)a4 error:(id)a5;
- (void).cxx_destruct;

@end
