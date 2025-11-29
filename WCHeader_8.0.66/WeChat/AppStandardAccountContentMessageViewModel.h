@class NSString, UIColor, UIImage;

@interface AppStandardAccountContentMessageViewModel : CommonMessageViewModel

@property (readonly, nonatomic) unsigned long long avatarType;
@property (readonly, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSString *accountDesc;
@property (readonly, nonatomic) UIColor *descColor;
@property (readonly, nonatomic) UIImage *descIcon;
@property (readonly, nonatomic) NSString *descIconUrl;
@property (readonly, nonatomic) UIImage *accountSuffix;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } descSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } titleSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } accountSuffixSize;
@property (readonly, nonatomic) double avatarWidth;
@property (readonly, nonatomic) BOOL hasSourceView;

- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })calculateLayoutSize;
- (double)layoutWidth;
- (BOOL)isShowSourceView;

@end
