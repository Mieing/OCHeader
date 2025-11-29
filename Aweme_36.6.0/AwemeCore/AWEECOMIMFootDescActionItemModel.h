@class NSString, NSDictionary, AWEECOMIMFootDescActionItemButtonStyle;

@interface AWEECOMIMFootDescActionItemModel : NSObject

@property (copy, nonatomic) NSString *bizType;
@property (copy, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) AWEECOMIMFootDescActionItemButtonStyle *buttonStyle;
@property (nonatomic) unsigned long long type;

+ (unsigned long long)typeWithBizType:(id)a0;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
