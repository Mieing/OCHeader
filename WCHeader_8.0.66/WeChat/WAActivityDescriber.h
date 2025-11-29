@class NSMutableArray;

@interface WAActivityDescriber : NSObject

@property (nonatomic) unsigned int allTaskCount;
@property (nonatomic) unsigned int weappCount;
@property (retain, nonatomic) NSMutableArray *weappAppidList;
@property (nonatomic) unsigned int gameCount;
@property (retain, nonatomic) NSMutableArray *gameAppidList;
@property (nonatomic) unsigned int foregroundCount;
@property (nonatomic) unsigned int backgroundCount;
@property (nonatomic) unsigned int suspendCount;

- (id)description;
- (void).cxx_destruct;

@end
