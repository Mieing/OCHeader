@class NSString;

@interface WCRedEnvelopesGreetingReportObject : MMObject

@property (nonatomic) int emoticonType;
@property (retain, nonatomic) NSString *emoticonMd5;
@property (nonatomic) unsigned int changeAmountTimes;
@property (nonatomic) unsigned int addSelfieEmoticonTimes;
@property (nonatomic) unsigned int addCustomEmoticonTimes;
@property (nonatomic) unsigned int addSelfieEmoticonFromBoardTimes;

- (void).cxx_destruct;

@end
