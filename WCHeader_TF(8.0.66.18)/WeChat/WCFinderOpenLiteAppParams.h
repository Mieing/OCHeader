@class NSString, UINavigationController;
@protocol WCFinderLiteAppInfoProvider;

@interface WCFinderOpenLiteAppParams : NSObject

@property (retain, nonatomic) id<WCFinderLiteAppInfoProvider> liteAppInfoProvider;
@property (copy, nonatomic) NSString *defaultURL;
@property (retain, nonatomic) UINavigationController *navVC;
@property (nonatomic) BOOL animated;
@property (nonatomic) BOOL withFallback;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ liteAppCloseBlock;

+ (id)paramsWithLiteAppInfoProvider:(id)a0 defaultURL:(id)a1 navVC:(id)a2;
+ (id)paramsWithAppId:(id)a0 page:(id)a1 query:(id)a2 minVersion:(id)a3 defaultURL:(id)a4 navVC:(id)a5;

- (id)init;
- (void).cxx_destruct;

@end
