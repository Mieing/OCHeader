@class NSString, NSDictionary;

@interface WCCanvasReportInfo : MMObject

@property (retain, nonatomic) NSString *snsId;
@property (retain, nonatomic) NSString *uxInfo;
@property (retain, nonatomic) NSString *sharedUxinfo;
@property (nonatomic) unsigned int entranceType;
@property (nonatomic) unsigned int exitType;
@property (nonatomic) unsigned int entranceScene;
@property (nonatomic) unsigned int entranceCanvasCount;
@property (nonatomic) unsigned int entranceSameCanvasCount;
@property (nonatomic) unsigned int enableSwipeRight;
@property (nonatomic) unsigned int swipeRightCount;
@property (nonatomic) unsigned int componentCount;
@property (nonatomic) unsigned long long stayTime;
@property (nonatomic) unsigned int shareSnsCount;
@property (nonatomic) unsigned int shareFriendCount;
@property (nonatomic) unsigned int favCount;
@property (retain, nonatomic) NSString *componentsStatStr;
@property (nonatomic) unsigned long long enterTimeStamp;
@property (retain, nonatomic) NSString *snsStatExt;
@property (retain, nonatomic) NSString *expId;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) unsigned int originScene;
@property (nonatomic) unsigned long long canvasId;
@property (retain, nonatomic) NSString *viewId;

- (id)genStatString;
- (void).cxx_destruct;

@end
