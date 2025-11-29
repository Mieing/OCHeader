@class NSDictionary, NSString, MMUIViewController;

@interface WSLocalTemplateConfig : NSObject

@property (retain, nonatomic) NSDictionary *urlParams;
@property (copy, nonatomic) NSString *htmlPath;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned long long localJSBizType;
@property (weak, nonatomic) MMUIViewController *containerVC;
@property (nonatomic) unsigned long long bizType;
@property (copy, nonatomic) NSString *byPassContent;

- (void).cxx_destruct;

@end
