@class NSString, TTEpubColor;

@interface TTEpubDelegateInfo : NSObject

@property (retain, nonatomic) NSString *relative_path;
@property (retain, nonatomic) NSString *parent_path;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } origin_size;
@property (nonatomic) double font_size;
@property (nonatomic) double ascent;
@property (nonatomic) double descent;
@property (nonatomic) BOOL is_footnote;
@property (nonatomic) BOOL is_inline;
@property (nonatomic) unsigned long long image_filter;
@property (nonatomic) BOOL is_clickable;
@property (nonatomic) BOOL is_background_img;
@property (retain, nonatomic) NSString *class_name;
@property (nonatomic) BOOL is_float_element;
@property (nonatomic) unsigned long long object_fit;
@property (nonatomic) unsigned long long vertical_align;
@property (retain, nonatomic) TTEpubColor *tint_color;
@property (nonatomic) BOOL is_nine_patch;
@property (nonatomic) unsigned long long scale_type;

- (void).cxx_destruct;

@end
