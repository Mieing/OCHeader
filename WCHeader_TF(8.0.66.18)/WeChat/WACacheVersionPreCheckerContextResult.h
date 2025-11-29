@class NSString, NSMutableArray;

@interface WACacheVersionPreCheckerContextResult : NSObject

@property (nonatomic) BOOL hasResult;
@property (nonatomic) BOOL checkSuccess;
@property (nonatomic) long long errCode;
@property (copy, nonatomic) NSString *errMsg;
@property (retain, nonatomic) NSMutableArray *needDownloadInfoDatas;
@property (retain, nonatomic) NSMutableArray *downloadSuccessInfoDatas;
@property (retain, nonatomic) NSMutableArray *checkPassInfoDatas;
@property (retain, nonatomic) NSMutableArray *checkFailedInfoDatas;
@property (retain, nonatomic) NSMutableArray *pluginInfoDatas;
@property (retain, nonatomic) NSMutableArray *checkAutoUpdateInfoDatas;

- (void).cxx_destruct;

@end
