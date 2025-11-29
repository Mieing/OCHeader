@class NSString, NSHashTable, AWEPzDomainModel, NSMutableArray;

@interface AWEPzDomainDataControl : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) AWEPzDomainModel *config;
@property (retain, nonatomic) NSHashTable *observerTable;
@property (nonatomic) BOOL hasLoadConfig;
@property (nonatomic) long long lastResponseResult;
@property (nonatomic) BOOL configFromHotSwitch;
@property (retain, nonatomic) NSMutableArray *waitingQueue;

- (void).cxx_destruct;

@end
