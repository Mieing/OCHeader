@interface FlutterStringCodec : NSObject <FlutterMessageCodec>

+ (id)sharedInstance;

- (id)encode:(id)a0;
- (id)decode:(id)a0;

@end
