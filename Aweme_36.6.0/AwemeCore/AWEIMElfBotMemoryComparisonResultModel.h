@class AWEIMElfBotMemorySyncDataModel, NSMutableArray;

@interface AWEIMElfBotMemoryComparisonResultModel : NSObject

@property (retain, nonatomic) AWEIMElfBotMemorySyncDataModel *toSyncDataModel;
@property (retain, nonatomic) NSMutableArray *forceReplace;
@property (retain, nonatomic) NSMutableArray *forceSync;
@property (nonatomic) BOOL shouldAsk;
@property (retain, nonatomic) NSMutableArray *logInfoList;

- (void).cxx_destruct;
- (id)init;

@end
