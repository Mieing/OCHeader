@class NSString;

@interface SWMidasIndependentDeploymentInfo : NSObject {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ keyID;
    void /* unknown type, empty encoding */ publicKey;
    void /* unknown type, empty encoding */ merchantID;
}

@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *keyID;
@property (nonatomic, readonly) NSString *publicKey;
@property (nonatomic, readonly) NSString *merchantID;
@property (nonatomic, readonly) NSString *description;

- (id)initWithUrl:(id)a0 keyID:(id)a1 publicKey:(id)a2 merchantID:(id)a3;
- (BOOL)validate;
- (id)init;
- (void).cxx_destruct;

@end
