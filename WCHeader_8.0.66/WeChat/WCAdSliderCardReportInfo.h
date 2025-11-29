@class NSMutableArray;

@interface WCAdSliderCardReportInfo : NSObject

@property (retain, nonatomic) NSMutableArray *reportItemList;
@property (nonatomic) unsigned int slideJumpCount;
@property (nonatomic) unsigned long long touchDuraion;
@property (nonatomic) unsigned int touchCount;

- (void).cxx_destruct;

@end
