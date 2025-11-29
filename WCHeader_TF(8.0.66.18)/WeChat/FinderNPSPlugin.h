@class FinderNPSFlutterAPI, NSString, MMFlutterViewController;

@interface FinderNPSPlugin : NSObject <FinderNPSNativeAPI, MMFlutterPlugin> {
    MMFlutterViewController *_flutterVC;
}

@property (retain, nonatomic) FinderNPSFlutterAPI *flutterAPI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)plugin;

- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController:(id)a0;
- (void)resignTextField;
- (void)onClickNPSQuestionBuffer:(id)a0 answerBuffer:(id)a1 inputText:(id)a2 mutliAnswerIDs:(id)a3 error:(id *)a4;
- (void)onCloseNPSWithError:(id *)a0;
- (void).cxx_destruct;

@end
