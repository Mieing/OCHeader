@class NSString, NSDictionary;

@interface BDUGFlowSessionExtInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long launchMode;
@property (nonatomic) unsigned long long fromScene;
@property (copy, nonatomic) NSString *toScene;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSString *toPage;
@property (nonatomic) BOOL isColdLaunch;
@property (copy, nonatomic) NSString *referrer;
@property (copy, nonatomic) NSString *redirectURL;
@property (copy, nonatomic) NSString *short2LongURL;
@property (copy, nonatomic) NSString *resultURL;
@property (copy, nonatomic) NSString *aliasID;
@property (copy, nonatomic) NSString *deeplinkURL;
@property (nonatomic) BOOL enterRoute;
@property (copy, nonatomic) NSString *itemType;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *targetHandler;
@property (copy, nonatomic) NSDictionary *extraDict;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
