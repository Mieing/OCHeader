@class UIImage;

@interface CheckBoxImageBuilder : NSObject

@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isEnable;
@property (nonatomic) unsigned long long imageIconViewSizeType;
@property (nonatomic) BOOL isOverlay;
@property (retain, nonatomic) UIImage *CheckBoxImage;
@property (readonly, copy, nonatomic) id /* block */ withEnable;
@property (readonly, copy, nonatomic) id /* block */ withOverlay;
@property (readonly, copy, nonatomic) id /* block */ withSelected;
@property (readonly, copy, nonatomic) CheckBoxImageBuilder *mediumBoxBuilder;
@property (readonly, copy, nonatomic) CheckBoxImageBuilder *smallBoxBuilder;
@property (readonly, nonatomic) UIImage *standardImage;

- (id)init;
- (void).cxx_destruct;

@end
