@class NSNumber, NSArray, NSString;

@interface AWENewsAISmartSubmitHelper : NSObject

@property (retain, nonatomic) NSNumber *newsID;
@property (copy, nonatomic) NSArray *contentProblems;
@property (copy, nonatomic) NSArray *uninterestingKeyword;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *trackWord;
@property (retain, nonatomic) NSNumber *trackID;
@property (copy, nonatomic) NSString *trackDesc;

- (void)updateWithParams:(id)a0;
- (void)submitDislikeWithCompletion:(id /* block */)a0;
- (id)p_createSubmitProvider;
- (id)p_createFollowProviderWithOperation:(long long)a0;
- (void)submitFollowWithOperation:(long long)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
