@class NSString;

@interface MMCommonPickerItem : NSObject <NSCopying>

@property (copy, nonatomic) NSString *displayStr;
@property (retain, nonatomic) id userInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayStr:(id)a0;
- (void).cxx_destruct;

@end
