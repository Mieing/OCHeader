@class CMessageWrap;

@interface UploadImageInfo : NSObject

@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (nonatomic) unsigned long long m_ui64StartTime;
@property (nonatomic) unsigned int m_uiTotalLen;
@property (nonatomic) int m_nRetCode;
@property (nonatomic) BOOL isParallelUpload;
@property (nonatomic) BOOL isUploadFail;
@property (nonatomic) BOOL isSendingMsg;
@property (nonatomic) BOOL hadTryCaculateOriginSourceMD5;

- (id)init;
- (id)GetStatInfo;
- (void).cxx_destruct;

@end
