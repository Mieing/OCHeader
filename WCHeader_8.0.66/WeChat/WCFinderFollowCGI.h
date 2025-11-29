@class NSString, NSData, WCFinderFollowCGIRequestParams;

@interface WCFinderFollowCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failureBlock;
@property (nonatomic) unsigned long long optype;
@property (nonatomic) int enterType;
@property (copy, nonatomic) NSString *posterUsername;
@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *objectID;
@property (nonatomic) unsigned long long reportScene;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned long long followScene;
@property (retain, nonatomic) NSString *sessionExtraKey;
@property (retain, nonatomic) NSData *liveCookies;
@property (nonatomic) unsigned long long fromMentionID;
@property (nonatomic) unsigned int enhanceFollowBtn;
@property (retain, nonatomic) WCFinderFollowCGIRequestParams *params;

- (id)initWithParams:(id)a0 successBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
- (void)createRequest;
- (id)additionalUdfKVInfo;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
