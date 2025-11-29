@class NSString;

@interface WxaLiteAppWidgetReleaseStoreMessage : NSObject

@property (copy, nonatomic) NSString *appId;

+ (id)makeWithAppId:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
