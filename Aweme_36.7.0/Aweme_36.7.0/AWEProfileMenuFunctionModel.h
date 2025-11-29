@class NSString, UIImage;

@interface AWEProfileMenuFunctionModel : NSObject <AWEListDiffable>

@property (nonatomic) BOOL isCard;
@property (nonatomic) BOOL isBar;
@property (nonatomic) BOOL isBarWithSwitch;
@property (nonatomic) BOOL hasDescrption;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) long long iconContentMode;
@property (copy, nonatomic) NSString *selectTitle;
@property (retain, nonatomic) UIImage *selectIcon;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long shapeType;
@property (nonatomic) unsigned long long showMethod;
@property (nonatomic) long long barSectionNumber;
@property (nonatomic) BOOL isSelectState;
@property (nonatomic) BOOL isRejectState;
@property (nonatomic) BOOL isForbidDismiss;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ descriptionInfoClickedBlock;
@property (nonatomic) BOOL isOn;
@property (nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
