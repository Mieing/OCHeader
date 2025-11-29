@class NSString, CommRequestSource;

@interface WAContactUpdateTaskWrap : MMObject

@property (nonatomic) unsigned long long updateType;
@property (copy, nonatomic) NSString *updateKey;
@property (nonatomic) BOOL isForce;
@property (retain, nonatomic) CommRequestSource *requestSource;

- (BOOL)isEqualToTaskWrap:(id)a0;
- (void).cxx_destruct;

@end
