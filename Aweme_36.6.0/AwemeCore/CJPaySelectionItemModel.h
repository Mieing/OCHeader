@class NSString;

@interface CJPaySelectionItemModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long selectPattern;
@property (nonatomic) BOOL isChecked;
@property (nonatomic) BOOL isHideDescLabel;
@property (nonatomic) BOOL needAnimated;
@property (nonatomic) double fontSize;

- (void).cxx_destruct;

@end
