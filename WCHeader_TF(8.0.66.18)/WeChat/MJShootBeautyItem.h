@class NSString;

@interface MJShootBeautyItem : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) float defaultValue;
@property (nonatomic) float value;
@property (readonly, nonatomic) BOOL isModified;

- (void).cxx_destruct;

@end
