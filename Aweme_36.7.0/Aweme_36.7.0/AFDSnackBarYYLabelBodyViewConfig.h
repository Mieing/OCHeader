@class UIImage, NSAttributedString;

@interface AFDSnackBarYYLabelBodyViewConfig : NSObject

@property (retain, nonatomic) NSAttributedString *attrString;
@property (retain, nonatomic) UIImage *rightImage;
@property (copy, nonatomic) id /* block */ rightImageTapBlock;

- (void).cxx_destruct;

@end
