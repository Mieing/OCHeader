@class NSData, NSString;

@interface MailAttachment : NSObject

@property (retain, nonatomic) NSData *m_dtData;
@property (retain, nonatomic) NSString *m_nsDataID;
@property (retain, nonatomic) NSString *m_nsName;
@property (nonatomic) unsigned long long m_uiSize;

- (id)init;
- (void).cxx_destruct;

@end
