@class NSString, NSDictionary;

@interface WxaLiteAppWidgetPublishGlobalEventToAllByAppIdMessage : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *data;

+ (id)makeWithAppId:(id)a0 eventName:(id)a1 data:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
