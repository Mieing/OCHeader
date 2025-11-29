@class NSString, NSDictionary;

@interface CdnTimelineMediaOfSightInfo : NSObject

@property (retain, nonatomic) NSString *m_nsClientMsgID;
@property (retain, nonatomic) NSString *m_nsFilePath;
@property (nonatomic) BOOL m_bHaveThumb;
@property (retain, nonatomic) NSString *m_nsThumbFilePath;
@property (nonatomic) BOOL useLargeFileAPI;
@property (nonatomic) int thumbFileType;
@property (copy, nonatomic) NSDictionary *customRequestHeaders;
@property (retain, nonatomic) NSString *bizReqPayload;

- (void).cxx_destruct;

@end
