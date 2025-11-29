@class NSString;

@interface IESPrefetchCacheModel : NSObject

@property (copy, nonatomic) NSString *requestDescription;
@property (nonatomic) double timeInterval;
@property (nonatomic) double expires;
@property (retain, nonatomic) id data;
@property (nonatomic) BOOL isPure;

+ (id)modelWithData:(id)a0 timeInterval:(double)a1 expires:(double)a2 isPure:(BOOL)a3;
+ (id)modelWithData:(id)a0 timeInterval:(double)a1 expires:(double)a2;

- (id)jsonSerializationDictionary;
- (void).cxx_destruct;
- (BOOL)hasExpired;
- (id)initWithDictionary:(id)a0;

@end
