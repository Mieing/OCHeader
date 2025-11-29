@class NSString, NSMutableDictionary, NSMutableArray;

@interface DIRSEventPacker : NSObject <IRISEventPacker> {
    unsigned long long estimatedLength;
    unsigned long long count;
    NSMutableDictionary *package;
    NSMutableDictionary *header;
    NSMutableArray *eventIDs;
    NSMutableArray *events;
}

@property (nonatomic) unsigned long long maxPackLength;
@property (nonatomic) unsigned long long maxEventCount;
@property (nonatomic) long long strategy;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendCommonParameters:(id)a0;
- (void)appendFeatureParameters:(id)a0;
- (void)appendFeatureOptions:(id)a0;
- (id)packetEvents;
- (void)_initPacket;
- (id)keywordFileds;
- (id)objectValue;
- (void).cxx_destruct;
- (id)serializedData;
- (id)init;
- (long long)appendEvent:(id)a0;
- (void)_estimate;
- (id)eventIDs;
- (void)append:(id)a0;
- (unsigned long long)estimatedLength;

@end
