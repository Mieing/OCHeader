@class NSString, CMessageWrap;

@interface CEmoticonUploadInfo : NSObject

@property (retain, nonatomic) NSString *m_nsMD5;
@property (nonatomic) unsigned int m_uiStartPos;
@property (nonatomic) unsigned int m_uiTotalLen;
@property (nonatomic) BOOL m_bFirst;
@property (retain, nonatomic) CMessageWrap *m_wrapMsg;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
