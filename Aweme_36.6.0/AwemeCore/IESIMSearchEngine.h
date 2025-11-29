@class NSOperationQueue, NSString;

@interface IESIMSearchEngine : NSObject <IESIMSearchEngineProtocol>

@property (retain, nonatomic) NSOperationQueue *queue;
@property (copy, nonatomic) id /* block */ operation;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchWithKeyword:(id)a0;
- (void)setUpOperationWithSearchUserRangeModel:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_searchRangeWithType:(unsigned long long)a0 user:(id)a1 keyword:(id)a2 scene:(unsigned long long)a3 conversationId:(id)a4;
- (void)p_addUser:(id)a0 toResultDict:(id)a1 withSearchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 searchUserType:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
