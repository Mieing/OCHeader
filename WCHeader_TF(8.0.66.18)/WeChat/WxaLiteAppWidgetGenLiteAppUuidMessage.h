@class NSString;

@interface WxaLiteAppWidgetGenLiteAppUuidMessage : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *page;
@property (copy, nonatomic) NSString *path;

+ (id)makeWithAppId:(id)a0 page:(id)a1 path:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
