@class UIImage, NSString, NSArray;

@interface AWEMRForceNativeDialogConfig : NSObject <NSCopying>

@property (nonatomic) long long style;
@property (nonatomic) long long iconType;
@property (copy, nonatomic) UIImage *iconPlaceHolder;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *buttons;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValidWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
