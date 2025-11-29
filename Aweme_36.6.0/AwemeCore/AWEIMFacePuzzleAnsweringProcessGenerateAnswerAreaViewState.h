@class UIImage, NSAttributedString;

@interface AWEIMFacePuzzleAnsweringProcessGenerateAnswerAreaViewState : NSObject

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSAttributedString *title;
@property (retain, nonatomic) NSAttributedString *subTitle;
@property (nonatomic) double process;
@property (retain, nonatomic) NSAttributedString *errorStr;
@property (retain, nonatomic) NSAttributedString *recapBtnStr;
@property (nonatomic) BOOL isError;
@property (copy, nonatomic) id /* block */ recapTapAction;

- (void).cxx_destruct;

@end
