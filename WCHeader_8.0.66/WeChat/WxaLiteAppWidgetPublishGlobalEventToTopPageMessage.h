@class NSNumber, NSString, NSDictionary;

@interface WxaLiteAppWidgetPublishGlobalEventToTopPageMessage : NSObject

@property (retain, nonatomic) NSNumber *appUuid;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *data;

+ (id)makeWithAppUuid:(id)a0 eventName:(id)a1 data:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
