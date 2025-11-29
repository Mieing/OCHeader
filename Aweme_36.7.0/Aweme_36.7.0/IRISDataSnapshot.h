@class NSString;

@interface IRISDataSnapshot : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long strategy;
@property (readonly) NSString *source;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL uploaded;
@property (weak, nonatomic) id sender;

- (void)indexIncrease;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;
- (void)updateTimestamp;

@end
