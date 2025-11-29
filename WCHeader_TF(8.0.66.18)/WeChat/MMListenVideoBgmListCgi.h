@class NSData, NSArray, NSString;

@interface MMListenVideoBgmListCgi : WCBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;
@property (nonatomic) int type;
@property (nonatomic) unsigned long long videoDuration;
@property (nonatomic) int businessId;
@property (retain, nonatomic) NSData *classifyResultData;
@property (nonatomic) unsigned long long requireMusicCount;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (retain, nonatomic) NSArray *miaojianMusicIds;
@property (copy, nonatomic) NSString *miaojianTemplateId;
@property (nonatomic) unsigned long long finderEnterScene;

- (id)initWithSuccessfulBlock:(id /* block */)a0 failed:(id /* block */)a1;
- (void)start;
- (id)buildRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
