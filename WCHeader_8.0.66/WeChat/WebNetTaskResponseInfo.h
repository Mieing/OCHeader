@class NSString;

@interface WebNetTaskResponseInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (nonatomic) unsigned int m_uiFileLength;
@property (nonatomic) int m_nRetCode;
@property (nonatomic) int m_nHttpStatusCode;
@property (nonatomic) BOOL m_isResumed;

- (void).cxx_destruct;

@end
