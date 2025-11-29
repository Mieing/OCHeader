@class BDWebImageStartUpConfig, NSArray, NSDictionary, NSString, BDWebImageAuthorizationControl;

@interface BDImageAuthorizationManagerConfig : NSObject

@property (class, readonly) BDImageAuthorizationManagerConfig *sharedInstance;

@property (copy, nonatomic) BDWebImageStartUpConfig *startUpConfig;
@property (retain, nonatomic) BDWebImageAuthorizationControl *authorizationControl;
@property (copy, nonatomic) NSArray *addedComponents;
@property (copy, nonatomic) NSArray *addedFeatures;
@property (copy, nonatomic) NSDictionary *verifyErr;
@property (readonly, copy, nonatomic) NSString *authorizationConfigDescription;

- (void)startUpWithConfig:(id)a0;
- (BOOL)isSupportHeifDecoding;
- (BOOL)isSupportHeifEncoding;
- (void).cxx_destruct;
- (id)init;

@end
