@class NSString;

@interface ArgusLynxTemplateResourceInfo : NSObject

@property (nonatomic) long long resourceType;
@property (copy, nonatomic) NSString *resourceURL;
@property (copy, nonatomic) NSString *cdnURL;
@property (copy, nonatomic) NSString *geckoChannel;
@property (copy, nonatomic) NSString *geckoBundle;
@property (nonatomic) unsigned long long geckoVersion;
@property (copy, nonatomic) NSString *originSchema;
@property (copy, nonatomic) NSString *bizTag;

- (void).cxx_destruct;

@end
