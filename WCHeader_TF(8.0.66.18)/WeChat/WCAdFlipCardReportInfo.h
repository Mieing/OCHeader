@class NSMutableArray;

@interface WCAdFlipCardReportInfo : NSObject

@property (retain, nonatomic) NSMutableArray *reportItemList;
@property (nonatomic) unsigned int touchCount;
@property (nonatomic) unsigned int flipCount;
@property (nonatomic) unsigned int cardClickCount;
@property (nonatomic) unsigned int learnMoreClickCount;
@property (nonatomic) BOOL isIntroduceAnimationDone;

- (void).cxx_destruct;

@end
