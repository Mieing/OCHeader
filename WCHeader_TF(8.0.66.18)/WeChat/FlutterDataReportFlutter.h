@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface FlutterDataReportFlutter : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onNativeActionAction:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
