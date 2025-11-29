@class UIImage, NSString;

@interface AWEIMPhotoPickerFunctionModel : NSObject

@property (nonatomic) unsigned long long functionType;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL useShadowIcon;

- (void).cxx_destruct;

@end
