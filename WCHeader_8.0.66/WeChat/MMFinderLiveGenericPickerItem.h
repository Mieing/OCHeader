@class NSString, UIColor;

@interface MMFinderLiveGenericPickerItem : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) UIColor *iconColor;
@property (retain, nonatomic) id userInfo;

+ (id)itemWithName:(id)a0 icon:(id)a1 iconColor:(id)a2;

- (void).cxx_destruct;

@end
