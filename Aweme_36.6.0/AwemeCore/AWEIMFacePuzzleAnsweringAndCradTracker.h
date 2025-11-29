@interface AWEIMFacePuzzleAnsweringAndCradTracker : NSObject

+ (void)trackCardEvent:(id)a0 message:(id)a1 context:(id)a2 params:(id)a3;
+ (void)trackShareCardShow:(id)a0 context:(id)a1 params:(id)a2;
+ (void)trackShareCardClick:(id)a0 context:(id)a1 params:(id)a2;
+ (void)trackQuestionCardShow:(id)a0 context:(id)a1 params:(id)a2;
+ (void)trackQuestionCardClick:(id)a0 context:(id)a1 params:(id)a2;
+ (void)trackAnswerCardShow:(id)a0 context:(id)a1 params:(id)a2;
+ (void)trackAnswerCardClick:(id)a0 context:(id)a1 params:(id)a2;
+ (void)trackPreparePageBackCLick:(id)a0 params:(id)a1;
+ (void)trackAnsweringPageCLick:(id)a0 params:(id)a1;
+ (void)trackAnsweringExitPageCLick:(id)a0 params:(id)a1;
+ (id)getUser:(id)a0;

@end
