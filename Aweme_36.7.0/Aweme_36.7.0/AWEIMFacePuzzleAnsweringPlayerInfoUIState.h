@class UIImage, NSAttributedString;

@interface AWEIMFacePuzzleAnsweringPlayerInfoUIState : NSObject

@property (retain, nonatomic) UIImage *avatarImage;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *subTitle;
@property (copy, nonatomic) NSAttributedString *name;
@property (copy, nonatomic) NSAttributedString *desStr;
@property (copy, nonatomic) id /* block */ backAction;
@property (nonatomic) BOOL hiddenLoading;

- (void).cxx_destruct;

@end
