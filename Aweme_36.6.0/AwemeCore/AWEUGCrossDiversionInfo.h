@class NSString, NSDictionary;

@interface AWEUGCrossDiversionInfo : NSObject

@property (copy, nonatomic) NSString *fromApp;
@property (copy, nonatomic) NSString *backScheme;
@property (copy, nonatomic) NSString *buoyTitle;
@property (nonatomic) BOOL buoyClosable;
@property (nonatomic) long long buoyShowType;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) long long landingScene;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) BOOL showed;
@property (nonatomic) BOOL reported;

- (void).cxx_destruct;

@end
