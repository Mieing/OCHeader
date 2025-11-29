@class NSString, NSArray;

@interface PayLiteAppPkgInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *resourceName;
@property (retain, nonatomic) NSArray *localResources;

- (id)init:(id)a0 resourceName:(id)a1 localResources:(id)a2;
- (void).cxx_destruct;

@end
