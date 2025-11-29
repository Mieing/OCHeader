@class NSURL, NSString;

@interface BFAppLinkTarget : NSObject

@property (retain, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *appStoreId;
@property (copy, nonatomic) NSString *appName;

+ (id)appLinkTargetWithURL:(id)a0 appStoreId:(id)a1 appName:(id)a2;

- (void).cxx_destruct;

@end
