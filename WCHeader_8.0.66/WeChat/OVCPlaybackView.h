@class ORERenderViewConIOS, UIView;

@interface OVCPlaybackView : UIView {
    ORERenderViewConIOS *_renderViewCon;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { char __data_[23]; unsigned char __padding_[0]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _windowName;
}

@property (retain, nonatomic) UIView *overlayView;

+ (struct CGSize { double x0; double x1; })alignSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1 roundMethod:(unsigned long long)a2;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (const void *)windowName;
- (id)backingRenderViewCon;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
