@class NSString;

@interface CNewSyncWrap : NSObject

@property (nonatomic) unsigned int m_uiSelector;
@property (nonatomic) unsigned int m_uiCgi;
@property (nonatomic) BOOL m_bIsSyncIng;
@property (nonatomic) BOOL m_bContinue;
@property (retain, nonatomic) NSString *m_nsSyncKeyMd5;
@property (nonatomic) unsigned int m_uiSyncBufferType;

- (id)init;
- (void).cxx_destruct;

@end
