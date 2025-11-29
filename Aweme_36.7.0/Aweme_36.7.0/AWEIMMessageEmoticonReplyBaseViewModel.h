@class UIImage;

@interface AWEIMMessageEmoticonReplyBaseViewModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemFrame;
@property (nonatomic) unsigned long long viewModelType;
@property (nonatomic) BOOL isLastInLine;

- (void).cxx_destruct;

@end
