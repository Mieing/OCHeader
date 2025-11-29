@class NSData, NSError;

@interface AWEIMSwiftImpl.IESIMCryptoKitResultImpl : NSObject <IESIMCryptoKitResult> {
    void /* function */ data;
    void /* function */ error;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (id)init;

@end
