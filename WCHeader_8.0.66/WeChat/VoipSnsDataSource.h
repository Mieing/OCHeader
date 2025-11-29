@class NSString;

@interface VoipSnsDataSource : NSObject <WCFacadeExt>

@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned int timeLimit;
@property (nonatomic) BOOL noMoreData;
@property (copy, nonatomic) id /* block */ resolver;

- (void)registerExtension;
- (void)unregisterExtension;
- (void)fetchData;
- (void)fetchMoreData;
- (void)handleData:(id)a0;
- (id)getLatestSnsInfo:(id)a0 timeLimit:(unsigned long long)a1;
- (void)onHomepageUpdate:(long long)a0 withAdded:(id)a1 andChanged:(id)a2 andDeleted:(id)a3 andTip:(id)a4;
- (void)dealloc;
- (void).cxx_destruct;

@end
