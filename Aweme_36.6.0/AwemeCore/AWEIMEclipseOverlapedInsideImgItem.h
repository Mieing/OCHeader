@class UIImage, NSArray, UIColor;

@interface AWEIMEclipseOverlapedInsideImgItem : NSObject

@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) UIImage *img;
@property (retain, nonatomic) NSArray *urlList;
@property (nonatomic) struct CGSize { double width; double height; } imgSize;
@property (retain, nonatomic) UIColor *backGroundColor;

- (id)initWithItemType:(unsigned long long)a0 img:(id)a1 urlList:(id)a2 imgSize:(struct CGSize { double x0; double x1; })a3 backGroundColor:(id)a4;
- (void).cxx_destruct;

@end
