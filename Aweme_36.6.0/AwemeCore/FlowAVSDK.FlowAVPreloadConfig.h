@class NSString, NSDictionary;

@interface FlowAVSDK.FlowAVPreloadConfig : NSObject {
    void /* function */ deviceId;
    void /* function */ extra;
}

@property (nonatomic, copy) NSString *deviceId;
@property (nonatomic, copy) NSDictionary *extra;
@property (nonatomic) BOOL enableBurst;
@property (nonatomic) BOOL enablePreJoinRoom;

- (void).cxx_destruct;
- (id)init;

@end
