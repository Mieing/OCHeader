@class NSArray, NSError;

@interface GCDAsyncUdpSpecialPacket : NSObject {
    BOOL resolveInProgress;
    NSArray *addresses;
    NSError *error;
}

- (void).cxx_destruct;
- (id)init;

@end
