@class NSData;

@interface CommonReliableSyncAction : MMObject

@property (retain, nonatomic) NSData *syncActionyData;
@property (nonatomic) unsigned int commBizIdBit;
@property (nonatomic) unsigned int syncScene;

- (id)initWithSyncActionyData:(id)a0 commBizIdBit:(unsigned int)a1 syncScene:(unsigned int)a2;
- (id)description;
- (void).cxx_destruct;

@end
