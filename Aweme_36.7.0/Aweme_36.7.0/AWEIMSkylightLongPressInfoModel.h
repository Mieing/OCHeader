@class NSString;

@interface AWEIMSkylightLongPressInfoModel : NSObject

@property (nonatomic) unsigned long long longPressType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *iconUrlDark;
@property (copy, nonatomic) NSString *schema;

- (id)getContentDict;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
