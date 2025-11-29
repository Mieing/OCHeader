@class UIImage, NSAttributedString;

@interface AWEShareCellTitleItemModel : NSObject

@property (retain, nonatomic) UIImage *closeButtonImage;
@property (retain, nonatomic) NSAttributedString *attributeTitle;
@property (retain, nonatomic) NSAttributedString *attributeSubTitle;
@property (nonatomic) double titleLeading;
@property (nonatomic) double titleTopMargin;
@property (nonatomic) BOOL disabledTitleClick;
@property (copy, nonatomic) id /* block */ closeImageClickCallback;
@property (copy, nonatomic) id /* block */ titleClickCallback;
@property (copy, nonatomic) id /* block */ searchButtonClickCallback;

- (void).cxx_destruct;

@end
