@class NSString;

@interface AWEPushPermissionModel : AWEBaseApiModel

@property (nonatomic) BOOL guideEnabled;
@property (copy, nonatomic) NSString *buttonCopywriting;
@property (nonatomic) unsigned long long guideType;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enablePushPermissionGuide;
- (void).cxx_destruct;

@end
