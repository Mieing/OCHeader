@class NSString;

@interface GameCenterMsgReportInfo : NSObject

@property (nonatomic) unsigned int msgSubTye;
@property (nonatomic) unsigned int interactive;
@property (retain, nonatomic) NSString *noticeId;
@property (retain, nonatomic) NSString *businessData;
@property (retain, nonatomic) NSString *extData;

- (void).cxx_destruct;

@end
