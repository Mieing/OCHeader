@class NSString, NSDictionary, NSArray;
@protocol AWEHttpTask;

@interface AWELiveAcqCastVideoSearchSugManager : NSObject

@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSArray *sugList;
@property (retain, nonatomic) id<AWEHttpTask> task;

- (id)getFinalGetUrl:(id)a0 withParams:(id)a1;
- (void)fetchSearchSugWithQuery:(id)a0 textFieldParams:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)reset;

@end
