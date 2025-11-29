@class NSString, UIColor, AWEAwemeModel;

@interface AWESearchAdTagContainerViewFrame : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) BOOL shouldShowTagContainer;
@property (nonatomic) struct CGSize { double width; double height; } paidTagSize;
@property (nonatomic) struct CGSize { double width; double height; } otherTagSize;
@property (nonatomic) struct CGSize { double width; double height; } tagContainerSize;
@property (copy, nonatomic) NSString *paidTagText;
@property (copy, nonatomic) NSString *otherTagText;
@property (retain, nonatomic) UIColor *paidTagTextColor;
@property (retain, nonatomic) UIColor *paidTagBackgroundColor;
@property (retain, nonatomic) UIColor *otherTagTextColor;
@property (retain, nonatomic) UIColor *otherTagBackgroundColor;

- (id)labelModel;
- (void)configViewModel;
- (void)configFrameWithAdModel:(id)a0;
- (void)calculateAndCacheFittedSize;
- (id)extractLabelInfoFromAdModel:(id)a0;
- (id)validTagText:(id)a0 defaultText:(id)a1;
- (id)transformColor:(id)a0 defaultHex:(id)a1;
- (double)calculateTagWidthWithText:(id)a0;
- (void).cxx_destruct;
- (id)labelFont;

@end
