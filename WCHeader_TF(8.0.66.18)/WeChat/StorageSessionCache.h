@class NSString, NSMutableArray;

@interface StorageSessionCache : MMUserService <MMServiceProtocol>

@property (nonatomic) BOOL loadDone;
@property (nonatomic) unsigned long long cacheDataSize;
@property (nonatomic) unsigned long long chatLogSize;
@property (nonatomic) unsigned long long resourceSize;
@property (nonatomic) unsigned long long otherAccountSize;
@property (nonatomic) unsigned long long otherDataSize;
@property (retain, nonatomic) NSMutableArray *cacheClassification;
@property (copy, nonatomic) id /* block */ cleanBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)dispose:(double)a0;
- (void)keep;
- (void)reset;
- (void).cxx_destruct;

@end
