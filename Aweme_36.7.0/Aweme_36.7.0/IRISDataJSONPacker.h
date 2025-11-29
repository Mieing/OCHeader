@class NSDictionary, NSMutableDictionary;

@interface IRISDataJSONPacker : NSObject {
    NSMutableDictionary *packet;
    unsigned long long estimatedLength;
    unsigned long long _count;
}

@property (nonatomic) long long strategies;
@property (nonatomic) unsigned long long maximumSize;
@property (nonatomic) unsigned long long maximumLength;
@property (readonly) long long estimatedLength;
@property (readonly) unsigned long long count;
@property (readonly) NSDictionary *packetDictionary;

- (BOOL)_avalible:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)addData:(id)a0;
- (id)initWithStrategies:(long long)a0;

@end
