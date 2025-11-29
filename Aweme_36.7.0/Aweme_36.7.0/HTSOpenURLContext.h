@class NSURL, NSDictionary, NSString;

@interface HTSOpenURLContext : NSObject

@property (retain, nonatomic) NSURL *openURL;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSString *sourceApplication;
@property (retain, nonatomic) id annotation;

- (void).cxx_destruct;

@end
