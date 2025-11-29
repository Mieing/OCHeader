@class NSDictionary;

@interface AWESolariaNearLineInfo : NSObject

@property (nonatomic) long long timestamp;
@property (nonatomic) long long interval;
@property (retain, nonatomic) NSDictionary *infoMap;

+ (id)modelCustomPropertyMapper;

- (id)initWithTimestamp:(long long)a0 interval:(long long)a1 infoMap:(id)a2;
- (void).cxx_destruct;

@end
