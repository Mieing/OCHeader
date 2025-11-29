@class NSMutableData;

@interface CSyncOplogWrap : NSObject

@property (nonatomic) unsigned int m_uiOplogID;
@property (nonatomic) unsigned int m_uiCmdID;
@property (retain, nonatomic) NSMutableData *m_dtBuffer;
@property (nonatomic) unsigned int m_uiRetryCount;
@property (nonatomic) unsigned int m_uiItemID;

- (id)init;
- (void).cxx_destruct;

@end
