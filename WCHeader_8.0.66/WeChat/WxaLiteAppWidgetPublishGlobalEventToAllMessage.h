@class NSString, NSDictionary;

@interface WxaLiteAppWidgetPublishGlobalEventToAllMessage : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *data;

+ (id)makeWithEventName:(id)a0 data:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
