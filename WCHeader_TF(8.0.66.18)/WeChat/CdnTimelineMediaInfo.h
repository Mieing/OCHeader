@class NSString, NSDictionary;

@interface CdnTimelineMediaInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) NSString *m_nsFilePath;
@property (nonatomic) BOOL m_bSinglePic;
@property (nonatomic) BOOL m_bUseWebp;
@property (nonatomic) BOOL m_bUseVCodec;
@property (nonatomic) BOOL m_bUseWxpc;
@property (nonatomic) BOOL m_bUseWxam;
@property (nonatomic) BOOL m_bMultiSpec;
@property (nonatomic) BOOL m_isCommentImage;
@property (nonatomic) int m_cdnMediaType;
@property (copy, nonatomic) NSDictionary *customRequestHeaders;

- (void).cxx_destruct;

@end
