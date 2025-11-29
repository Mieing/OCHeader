@class NSString;

@interface WCNetworkMediaStreamVideoInfo : NSObject

@property (retain, nonatomic) NSString *m_nsStreamVideoUrl;
@property (retain, nonatomic) NSString *m_nsStreamVideoThumbUrl;
@property (nonatomic) unsigned int m_uiStreamVideoTime;
@property (retain, nonatomic) NSString *m_nsStreamVideoTitle;
@property (retain, nonatomic) NSString *m_nsStreamVideoWording;
@property (retain, nonatomic) NSString *m_nsStreamVideoWebUrl;
@property (retain, nonatomic) NSString *m_nsStreamVideoPublishId;
@property (retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo;
@property (retain, nonatomic) NSString *m_nsStatExtStr;
@property (retain, nonatomic) NSString *m_nsJsReportArgs;

- (void).cxx_destruct;

@end
