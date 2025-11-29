@class NSString;

@interface AWEOpenPlatformAuthScopeItem : NSObject

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *descText;
@property (nonatomic) BOOL necessary;
@property (nonatomic) BOOL granted;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL allNecessary;
@property (nonatomic) BOOL isNoAuth;
@property (retain, nonatomic) NSString *noAuthDesc;
@property (nonatomic) unsigned long long pageType;

- (void).cxx_destruct;
- (id)init;

@end
