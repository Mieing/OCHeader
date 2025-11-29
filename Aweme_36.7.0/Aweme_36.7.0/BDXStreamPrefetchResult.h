@class NSMutableData;

@interface BDXStreamPrefetchResult : BDXPrefetchResult

@property (retain) NSMutableData *streamData;
@property (copy, nonatomic) id /* block */ streamCallback;

- (void).cxx_destruct;

@end
