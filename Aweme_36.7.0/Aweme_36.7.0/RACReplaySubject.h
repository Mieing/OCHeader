@class NSError, NSMutableArray;

@interface RACReplaySubject : RACSubject

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) NSMutableArray *valuesReceived;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL hasError;
@property (retain, nonatomic) NSError *error;

+ (id)replaySubjectWithCapacity:(unsigned long long)a0;

- (void)sendNext:(id)a0;
- (void)sendError:(id)a0;
- (void)sendCompleted;
- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;

@end
