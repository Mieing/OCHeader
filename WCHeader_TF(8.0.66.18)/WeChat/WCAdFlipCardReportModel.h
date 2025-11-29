@class NSMutableArray;

@interface WCAdFlipCardReportModel : WCAdChannelReportExtendInfoModel

@property (nonatomic) unsigned int touchCount;
@property (nonatomic) unsigned int flipCount;
@property (nonatomic) unsigned int cardClickCount;
@property (nonatomic) unsigned int learnMoreClickCount;
@property (retain, nonatomic) NSMutableArray *reportItemList;

- (void).cxx_destruct;

@end
