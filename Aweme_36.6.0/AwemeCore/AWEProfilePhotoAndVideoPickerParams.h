@class NSString, NSArray, UIImage, UIView;

@interface AWEProfilePhotoAndVideoPickerParams : NSObject

@property (retain, nonatomic) UIView *sourceView;
@property (copy, nonatomic) NSString *reason;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long editorType;
@property (nonatomic) unsigned long long cropingStyle;
@property (retain, nonatomic) UIImage *coverMaskImage;
@property (nonatomic) struct CGSize { double width; double height; } rato;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ cancelActionBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void).cxx_destruct;

@end
