@class NSString, NSData;

@interface WCFinderLiveGetPromoteJumpInfoCGI : WCFinderLiveBaseCgi

@property (nonatomic) unsigned int type;
@property (copy, nonatomic) NSString *jumpId;
@property (retain, nonatomic) NSData *jumpInfoBuffer;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithLiveTaskId:(id)a0 type:(unsigned int)a1 jumpId:(id)a2 jumpInfoBuffer:(id)a3 sessionBuffer:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;
- (void)createRequest;
- (id)getUxInfoData;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
