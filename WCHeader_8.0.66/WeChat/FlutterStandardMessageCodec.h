@class FlutterStandardReaderWriter;

@interface FlutterStandardMessageCodec : NSObject <FlutterMessageCodec> {
    FlutterStandardReaderWriter *_readerWriter;
}

+ (id)sharedInstance;
+ (id)codecWithReaderWriter:(id)a0;

- (id)initWithReaderWriter:(id)a0;
- (id)encode:(id)a0;
- (id)decode:(id)a0;
- (void).cxx_destruct;

@end
