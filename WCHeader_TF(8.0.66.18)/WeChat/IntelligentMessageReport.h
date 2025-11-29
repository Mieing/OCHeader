@class NSString;

@interface IntelligentMessageReport : MMObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *searchSessionId;
@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *printQuery;
@property (retain, nonatomic) NSString *searchQuery;
@property (retain, nonatomic) NSString *expoQuery;
@property (retain, nonatomic) NSString *keyWord;
@property (nonatomic) unsigned int searchScene;
@property (nonatomic) unsigned int imageCnt;
@property (nonatomic) unsigned int peopleCnt;
@property (nonatomic) unsigned int imageSendTime;
@property (nonatomic) unsigned int tab;
@property (nonatomic) unsigned int searchCost;
@property (nonatomic) unsigned int ifImageDone;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long imageAllCount;
@property (nonatomic) unsigned int matchType;
@property (nonatomic) BOOL isPopUp;
@property (nonatomic) unsigned int mediaResultType;
@property (nonatomic) unsigned int finderCnt;
@property (nonatomic) unsigned int categoryDisplayType;
@property (nonatomic) unsigned int stayTime;

- (void).cxx_destruct;

@end
