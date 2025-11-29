@interface FlutterConnectionCollection : NSObject {
    void /* unknown type, empty encoding */ counter;
    void /* unknown type, empty encoding */ connections;
}

+ (long long)makeErrorConnectionWithErrorCode:(long long)a0;

- (long long)acquireConnectionForChannel:(id)a0;
- (id)cleanupConnectionWithID:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
