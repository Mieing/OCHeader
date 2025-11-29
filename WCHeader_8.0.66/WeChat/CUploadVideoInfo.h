@class CMessageWrap;

@interface CUploadVideoInfo : NSObject

@property (nonatomic) unsigned int m_uiUploadCount;
@property (nonatomic) unsigned int m_uiCurOffset;
@property (nonatomic) unsigned int m_uiCurOffsetCount;
@property (nonatomic) unsigned int m_uiZeroUploadCount;
@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (nonatomic) unsigned long long m_ui64StartTime;
@property (nonatomic) unsigned int m_uiOpType;
@property (nonatomic) int m_nRetCode;
@property (nonatomic) BOOL isParallelUpload;

- (id)init;
- (id)description;
- (id)GetStatInfo;
- (void).cxx_destruct;

@end
