@class UIColor, NSString;

@interface ACCDUXLoadingConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) struct CGSize { double width; double height; } closeButtonInteractiveSize;
@property (retain, nonatomic) UIColor *closeIconColor;
@property (copy, nonatomic) id /* block */ awe_closeCallback;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL withCover;
@property (nonatomic) double delay;

- (void).cxx_destruct;

@end
