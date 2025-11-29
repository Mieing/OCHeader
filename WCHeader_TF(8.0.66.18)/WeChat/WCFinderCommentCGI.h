@class NSString, NSData, WCFinderComment;

@interface WCFinderCommentCGI : WCFinderBaseCgi

@property (retain, nonatomic) WCFinderComment *comment;
@property (retain, nonatomic) NSString *replayUserName;
@property (nonatomic) unsigned long long objectID;
@property (nonatomic) unsigned long long rootCommentID;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;
@property (nonatomic) unsigned long long scene;
@property (copy, nonatomic) NSString *nonceID;
@property (retain, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned int bypassBufferType;
@property (retain, nonatomic) NSData *bypassBuffer;

- (id)initCommentCGIWith:(id)a0 username:(id)a1 scene:(unsigned long long)a2 objectID:(unsigned long long)a3 nonceID:(id)a4 sessionBuffer:(id)a5 successBlock:(id /* block */)a6 failureBlock:(id /* block */)a7;
- (id)initCommentCGIWith:(id)a0 username:(id)a1 scene:(unsigned long long)a2 objectID:(unsigned long long)a3 nonceID:(id)a4 sessionBuffer:(id)a5 bypassBufferType:(unsigned int)a6 bypassBuffer:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
- (void)internalInitCommentCGIWith:(id)a0 username:(id)a1 scene:(unsigned long long)a2 objectID:(unsigned long long)a3 nonceID:(id)a4 sessionBuffer:(id)a5 bypassBufferType:(int)a6 bypassBuffer:(id)a7 successBlock:(id /* block */)a8 failureBlock:(id /* block */)a9;
- (void)createPostRequest;
- (id)additionalUdfKVInfo;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
