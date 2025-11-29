@class NSString, NSData;

@interface CDirectSend : NSObject

@property (nonatomic) unsigned char m_ucCmdID;
@property (nonatomic) unsigned char m_ucFlag;
@property (nonatomic) unsigned int m_uiSeq;
@property (nonatomic) unsigned short m_usUsrNameLen;
@property (retain, nonatomic) NSString *m_nsUsrNameList;
@property (nonatomic) unsigned short m_usDataLen;
@property (retain, nonatomic) NSData *m_dtData;

- (id)init;
- (id)Encode;
- (BOOL)Decode:(id)a0;
- (void).cxx_destruct;

@end
