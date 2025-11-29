@class NSString;

@interface BDSCNotifyTip : NSObject

@property (copy, nonatomic) NSString *verticalIconUrl;
@property (copy, nonatomic) NSString *horizonIconUrl;
@property (copy, nonatomic) NSString *text;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
