@class NSString, UIColor;

@interface MMFinderLivePickerViewConfig : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSString *cancelTitle;
@property (retain, nonatomic) UIColor *cancelTitleColor;
@property (retain, nonatomic) NSString *confirmTitle;
@property (retain, nonatomic) UIColor *confirmTitleColor;
@property (retain, nonatomic) UIColor *contentBackgroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL blurContentBackground;
@property (retain, nonatomic) UIColor *rowHighlightedColor;
@property (nonatomic) double rowHeight;

- (id)init;
- (void).cxx_destruct;

@end
