@class NSString, NSDictionary, NSError;

@interface AWEDeepLinkToken : NSObject

@property (retain, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *resultURLString;
@property (nonatomic) unsigned long long requireLoginType;
@property (copy, nonatomic) NSString *targetLoginUID;
@property (nonatomic) unsigned long long dpPageType;
@property (nonatomic) double transferDelayInterval;
@property (nonatomic) BOOL skipURLTransfer;
@property (nonatomic) BOOL forceQuickTransfer;
@property (nonatomic) BOOL resetToRoot;
@property (copy, nonatomic) NSDictionary *loginTrackerInfo;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSError *error;

+ (id)tokenFromURL:(id)a0 withKey:(id)a1 pathParams:(id)a2 queryParams:(id)a3;
+ (id)tokenFromURL:(id)a0 queryParams:(id)a1;
+ (id)purifyParams:(id)a0;
+ (id)tokenFromCreator:(id)a0;

- (void)updateResultURL:(id)a0;
- (void).cxx_destruct;

@end
