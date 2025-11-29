@class NSString, NSMutableArray;

@interface VoipStatusDataSourceService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *snsProxyList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isBlockUserRecentStatus:(id)a0;
- (id)getTextStatus:(id)a0 timeLimit:(unsigned long long)a1;
- (id)getLatestFinder:(id)a0 timeLimit:(unsigned long long)a1;
- (id)getLatestSnsInfo:(id)a0 timeLimit:(unsigned long long)a1;
- (id)getLatestStatus:(id)a0 timeLimit:(unsigned long long)a1;
- (unsigned int)getCreateTime:(id)a0;
- (void).cxx_destruct;

@end
