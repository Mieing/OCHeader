@class NSString;

@interface LKSSOApp : NSObject {
    void /* unknown type, empty encoding */ appId;
    void /* unknown type, empty encoding */ scheme;
    void /* unknown type, empty encoding */ packageId;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ server;
@property (nonatomic, readonly) NSString *appId;
@property (nonatomic, readonly) NSString *scheme;
@property (nonatomic, readonly) NSString *description;

- (id)initWithServer:(long long)a0 appId:(id)a1 scheme:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
