@class NSString, NSError, NSMutableDictionary;

@interface AWEDLMSessionExtInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long launchMode;
@property (nonatomic) unsigned long long fromScene;
@property (nonatomic) unsigned long long toScene;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSString *toPage;
@property (nonatomic) BOOL isColdLaunch;
@property (copy, nonatomic) NSString *referer;
@property (copy, nonatomic) NSString *redirectURL;
@property (copy, nonatomic) NSString *short2LongURL;
@property (copy, nonatomic) NSString *resultURL;
@property (nonatomic) BOOL enterRoute;
@property (copy, nonatomic) NSString *deeplinkURL;
@property (copy, nonatomic) NSString *aliasID;
@property (copy, nonatomic) NSString *itemType;
@property (retain, nonatomic) NSError *businessError;
@property (retain, nonatomic) NSMutableDictionary *logExtra;
@property (retain, nonatomic) NSError *bizError;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
