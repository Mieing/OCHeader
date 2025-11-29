@class NSString;

@interface CdnStoreMediaInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) NSString *m_nsFilePath;
@property (nonatomic) unsigned long long m_uiFileTotalLen;

- (void).cxx_destruct;

@end
