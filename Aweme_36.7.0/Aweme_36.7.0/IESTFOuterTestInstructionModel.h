@class UIImage, NSAttributedString, NSString;

@interface IESTFOuterTestInstructionModel : NSObject

@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) UIImage *appIconImage;
@property (copy, nonatomic) NSString *appIconImageURLStr;
@property (copy, nonatomic) NSString *appDescription;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL isEnabled;

- (void).cxx_destruct;

@end
