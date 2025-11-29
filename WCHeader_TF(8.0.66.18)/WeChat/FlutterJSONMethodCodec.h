@interface FlutterJSONMethodCodec : NSObject <FlutterMethodCodec>

+ (id)sharedInstance;

- (id)encodeMethodCall:(id)a0;
- (id)encodeSuccessEnvelope:(id)a0;
- (id)encodeErrorEnvelope:(id)a0;
- (id)decodeMethodCall:(id)a0;
- (id)decodeEnvelope:(id)a0;
- (id)wrapNil:(id)a0;
- (id)unwrapNil:(id)a0;

@end
