@class YYTextLayout, NSAttributedString, NSArray;

@interface AWEHotSearchCommentContentInfoModel : NSObject

@property (copy, nonatomic) NSAttributedString *contentAttrString;
@property (retain, nonatomic) YYTextLayout *contentLayout;
@property (copy, nonatomic) NSAttributedString *fullTextBtnAttrString;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct CGSize { double width; double height; } stickerSize;
@property (copy, nonatomic) NSArray *imageURLList;
@property (copy, nonatomic) NSArray *stickerURLList;

- (void).cxx_destruct;

@end
