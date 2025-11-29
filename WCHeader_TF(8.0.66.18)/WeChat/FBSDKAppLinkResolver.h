@class NSString, NSMutableDictionary;

@interface FBSDKAppLinkResolver : NSObject <FBSDKAppLinkResolving>

@property (retain, nonatomic) NSMutableDictionary *cachedFBSDKAppLinks;
@property (nonatomic) long long userInterfaceIdiom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)resolver;

@end
