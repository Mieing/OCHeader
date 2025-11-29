@class NSURL, NSString;

@interface WAJSCServiceInjectExtendScriptModel : NSObject

@property (copy, nonatomic) NSURL *sourceURL;
@property (copy, nonatomic) NSString *script;

+ (id)modelWithScript:(id)a0 sourceURL:(id)a1;

- (id)init;
- (void).cxx_destruct;

@end
