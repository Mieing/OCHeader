@class NSArray;

@interface MPPageFastLoadPageDataCgiContext : NSObject

@property (nonatomic) unsigned int enterType;
@property (nonatomic) unsigned long long sceneForFetch;
@property (retain, nonatomic) NSArray *urlInfoList;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic) BOOL isResponseSuccess;
@property (nonatomic) unsigned int responseContentUpdateCount;
@property (nonatomic) unsigned int responseContentNoUpdateCount;
@property (nonatomic) unsigned int responseContentSize;

- (void).cxx_destruct;

@end
