@class NSString, LynxTemplateBundle;

@interface AWEECDynamicComponentModel : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *dynamicUrl;
@property (retain, nonatomic) LynxTemplateBundle *bundle;
@property (nonatomic) unsigned long long loadDynamicCompStart;
@property (nonatomic) unsigned long long loadDynamicCompEnd;
@property (nonatomic) unsigned long long decodeDynamicCompStart;
@property (nonatomic) unsigned long long decodeDynamicCompEnd;
@property (nonatomic) unsigned long long registerDynamicCompStart;
@property (nonatomic) unsigned long long registerDynamicCompEnd;
@property (nonatomic) long long errorCode;

- (void).cxx_destruct;
- (id)init;

@end
