@class NSString, UIImage, UIColor;

@interface BDPActionSheetItemModel : NSObject

@property (nonatomic) double maxScale;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) UIImage *iconImage;
@property (nonatomic) unsigned long long use;
@property (copy, nonatomic) id /* block */ select;
@property (nonatomic) BOOL dismissShouldBeforeSelect;
@property (nonatomic) long long type;
@property (nonatomic) double cellHeight;
@property (nonatomic) unsigned long long enlargeType;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *subTitleColor;

- (id)initWithTitle:(id)a0 andSubtitle:(id)a1 andUseIsNormal:(BOOL)a2;
- (double)originHorizontalHeight;
- (id)initWithTitle:(id)a0 andSubtitle:(id)a1 andIconImage:(id)a2 andUseIsNormal:(BOOL)a3;
- (void).cxx_destruct;

@end
