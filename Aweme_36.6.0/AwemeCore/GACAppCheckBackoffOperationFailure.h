@class NSError, NSDate;

@interface GACAppCheckBackoffOperationFailure : NSObject

@property (readonly, nonatomic) NSDate *finishDate;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long backoffType;
@property (readonly, nonatomic) long long retryCount;

+ (id)nextRetryFailureWithFailure:(id)a0 finishDate:(id)a1 error:(id)a2 backoffType:(unsigned long long)a3;

- (id)initWithFinishDate:(id)a0 error:(id)a1 backoffType:(unsigned long long)a2 retryCount:(long long)a3;
- (void).cxx_destruct;

@end
