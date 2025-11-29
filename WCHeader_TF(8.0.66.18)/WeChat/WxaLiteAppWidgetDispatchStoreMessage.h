@class NSString, NSDictionary;

@interface WxaLiteAppWidgetDispatchStoreMessage : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSDictionary *params;

+ (id)makeWithAppId:(id)a0 actionName:(id)a1 params:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
