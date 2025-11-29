@class NSString;

@interface TPPlayerLogContext : NSObject

@property (retain, nonatomic) NSString *tag;
@property (nonatomic) int lifeId;
@property (nonatomic) int playId;
@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) NSString *module;

- (id)initWithDefaultValues;
- (id)initWithIncrementalValues;
- (id)initWithModule:(id)a0;
- (id)initWithPrefix:(id)a0 lifeId:(int)a1 playId:(int)a2 module:(id)a3;
- (void)increasePlayId;
- (void).cxx_destruct;

@end
