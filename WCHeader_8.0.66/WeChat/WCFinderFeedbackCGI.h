@class NSString, NSMutableArray;

@interface WCFinderFeedbackCGI : WCFinderBaseCgi

@property (nonatomic) unsigned long long objectID;
@property (nonatomic) unsigned long long feedbackType;
@property (nonatomic) long long subType;
@property (copy, nonatomic) NSMutableArray *subTypeList;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (copy, nonatomic) NSString *nonceID;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (nonatomic) int scene;
@property (nonatomic) unsigned long long liveScene;
@property (nonatomic) int satisfactionQuestSubType;

- (id)initWithFeedbackType:(unsigned long long)a0 subType:(long long)a1 subTypeList:(id)a2 objectID:(unsigned long long)a3 nonceID:(id)a4 sessionBuffer:(id)a5 scene:(int)a6 liveScene:(unsigned long long)a7 sessionExtraKey:(id)a8 satisfactionQuestSubType:(int)a9 successBlock:(id /* block */)a10 failBlock:(id /* block */)a11;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
