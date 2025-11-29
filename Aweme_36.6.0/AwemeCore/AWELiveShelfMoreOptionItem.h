@class UIImage, NSString;

@interface AWELiveShelfMoreOptionItem : NSObject

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ itemClickedBlock;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 title:(id)a1;

@end
