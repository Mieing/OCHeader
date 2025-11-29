@class NSString;

@interface CommonReliableSyncConfig : MMObject

@property (nonatomic) unsigned int commBizIdBit;
@property (nonatomic) unsigned int cgiId;
@property (retain, nonatomic) NSString *cgiName;
@property (retain, nonatomic) NSString *handleClassName;

+ (id)genSyncConfigWithCommBizIdBit:(unsigned int)a0 cgiId:(unsigned int)a1 cgiName:(id)a2 handleClassName:(id)a3;

- (void).cxx_destruct;

@end
