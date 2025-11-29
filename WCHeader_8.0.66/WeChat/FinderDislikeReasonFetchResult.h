@class NSArray;

@interface FinderDislikeReasonFetchResult : NSObject

@property (nonatomic) BOOL dislikeReasonFetching;
@property (nonatomic) BOOL dislikeReasonFetchFailed;
@property (copy, nonatomic) NSArray *dislikeReasonsBuffers;

+ (id)makeWithDislikeReasonFetching:(BOOL)a0 dislikeReasonFetchFailed:(BOOL)a1 dislikeReasonsBuffers:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
