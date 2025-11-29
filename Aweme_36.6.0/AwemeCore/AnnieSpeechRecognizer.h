@class PuzzleContext, SAMICore;

@interface AnnieSpeechRecognizer : NSObject

@property (retain, nonatomic) SAMICore *handler;
@property (weak, nonatomic) PuzzleContext *context;

- (void)stopRecognition;
- (BOOL)startRecognitionWithAppKey:(id)a0 token:(id)a1 sosSilenceTimeout:(int)a2 eosSilenceTimeout:(int)a3 sentenceMaxSeconds:(int)a4 listener:(id)a5;
- (void)recognizePCMAudioData:(id)a0 withDataSize:(unsigned int)a1;
- (BOOL)setupSAMIWithAppKey:(id)a0 token:(id)a1 sosSilenceTimeout:(int)a2 eosSilenceTimeout:(int)a3 sentenceMaxSeconds:(int)a4 listener:(id)a5;
- (void).cxx_destruct;

@end
