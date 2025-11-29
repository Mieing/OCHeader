@class AWEIMFacePuzzleAnsweringProcessFunctionAreaViewState, AWEIMFacePuzzleAnsweringProcessQuestionAreaViewState, UIImage, AWEIMFacePuzzleAnsweringProcessGenerateAnswerAreaViewState, NSAttributedString;

@interface AWEIMFacePuzzleAnsweringProcessViewState : NSObject

@property (copy, nonatomic) id /* block */ closeTapAction;
@property (copy, nonatomic) id /* block */ moreBtnTapAction;
@property (nonatomic) BOOL isGaming;
@property (retain, nonatomic) UIImage *closeImage;
@property (retain, nonatomic) UIImage *moreImage;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *leftTime;
@property (copy, nonatomic) NSAttributedString *des;
@property (copy, nonatomic) NSAttributedString *leftTimeA;
@property (copy, nonatomic) NSAttributedString *leftTimeB;
@property (copy, nonatomic) NSAttributedString *leftTimeC;
@property (nonatomic) BOOL hiddenCoverView;
@property (copy, nonatomic) NSAttributedString *activityName;
@property (retain, nonatomic) UIImage *bgImage;
@property (nonatomic) BOOL hiddenGenerateAnswer;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringProcessGenerateAnswerAreaViewState *generateAnswer;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringProcessFunctionAreaViewState *functionAreaUIState;
@property (retain, nonatomic) AWEIMFacePuzzleAnsweringProcessQuestionAreaViewState *questionAreaUIState;

- (void).cxx_destruct;

@end
