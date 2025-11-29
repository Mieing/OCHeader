@class NSString;

@interface MsgSearchHelperReport : MMObject

@property (retain, nonatomic) NSString *searchSessionId;
@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int tab;
@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int searchCost;
@property (nonatomic) unsigned int subTab;
@property (nonatomic) unsigned int ifImageDone;
@property (nonatomic) unsigned int ifAllImageDone;
@property (nonatomic) unsigned int resultCnt;
@property (nonatomic) unsigned int imageLoadingCost;
@property (nonatomic) unsigned int imageCnt;
@property (nonatomic) unsigned int imageIdentify;
@property (nonatomic) unsigned int clickPosition;
@property (nonatomic) unsigned int clickPositionSameType;
@property (nonatomic) unsigned int finderCnt;
@property (nonatomic) unsigned int verticalSearchEntrance;
@property (nonatomic) unsigned int stayTime;

- (void)copyFromOtherObject:(id)a0;
- (void).cxx_destruct;

@end
