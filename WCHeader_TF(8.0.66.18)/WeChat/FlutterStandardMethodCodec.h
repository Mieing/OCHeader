@class FlutterStandardReaderWriter;

@interface FlutterStandardMethodCodec : NSObject <FlutterMethodCodec> {
    FlutterStandardReaderWriter *_readerWriter;
}

+ (id)sharedInstance;
+ (id)codecWithReaderWriter:(id)a0;

- (id)initWithReaderWriter:(id)a0;
- (id)encodeMethodCall:(id)a0;
- (id)encodeSuccessEnvelope:(id)a0;
- (id)encodeErrorEnvelope:(id)a0;
- (id)decodeMethodCall:(id)a0;
- (id)decodeEnvelope:(id)a0;
- (void).cxx_destruct;

@end
