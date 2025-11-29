@class NSString;

@interface UTBaseRequestAuthentication : NSObject <UTIRequestAuthentication> {
    NSString *mAppKey;
    NSString *mAppSecret;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
