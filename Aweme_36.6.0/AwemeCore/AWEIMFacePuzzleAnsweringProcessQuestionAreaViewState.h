@class UIImage, NSAttributedString, NSArray;

@interface AWEIMFacePuzzleAnsweringProcessQuestionAreaViewState : NSObject

@property (retain, nonatomic) UIImage *avatarImage;
@property (retain, nonatomic) NSAttributedString *name;
@property (retain, nonatomic) NSAttributedString *subTitle;
@property (retain, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) id /* block */ didClickAnswer;
@property (retain, nonatomic) NSArray *questions;

- (void).cxx_destruct;

@end
