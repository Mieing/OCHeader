@class NSString;

@interface AWECodeGenBaseNoticeSubscribeModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int type;
@property (nonatomic) int unsubscribe;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
