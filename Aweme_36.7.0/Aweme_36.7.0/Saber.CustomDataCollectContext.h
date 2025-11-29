@class NSString;

@interface Saber.CustomDataCollectContext : NSObject <Saber.DataCollectContext> {
    void /* function */ channelTiming;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic, readonly) NSString *channelTiming;

- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end
