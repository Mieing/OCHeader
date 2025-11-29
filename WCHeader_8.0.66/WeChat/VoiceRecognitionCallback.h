@class NSString, NSObject;
@protocol FlutterBinaryMessenger;

@interface VoiceRecognitionCallback : NSObject

@property (retain, nonatomic) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@property (retain, nonatomic) NSString *messageChannelSuffix;

- (id)initWithBinaryMessenger:(id)a0;
- (id)initWithBinaryMessenger:(id)a0 messageChannelSuffix:(id)a1;
- (void)onResultResult:(id)a0 completion:(id /* block */)a1;
- (void)onErrorErrType:(long long)a0 errCode:(long long)a1 localCode:(long long)a2 voiceid:(long long)a3 completion:(id /* block */)a4;
- (void)onRecordFinishedWithCompletion:(id /* block */)a0;
- (void)onRecognizeFinishedWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;

@end
