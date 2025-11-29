@class CMessageWrap;

@interface CDownloadVideoInfo : NSObject

@property (retain, nonatomic) CMessageWrap *m_wrapMsg;
@property (nonatomic) unsigned long long m_ui64StartTime;
@property (nonatomic) unsigned int m_uiOpType;
@property (nonatomic) int m_nRetCode;

- (id)init;
- (id)GetStatInfo;
- (void).cxx_destruct;

@end
