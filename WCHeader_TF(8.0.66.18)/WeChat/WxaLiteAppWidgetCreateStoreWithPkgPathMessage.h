@class NSString, NSNumber;

@interface WxaLiteAppWidgetCreateStoreWithPkgPathMessage : NSObject

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) NSNumber *aliveSeconds;
@property (copy, nonatomic) NSString *pkgPath;

+ (id)makeWithAppId:(id)a0 aliveSeconds:(id)a1 pkgPath:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
