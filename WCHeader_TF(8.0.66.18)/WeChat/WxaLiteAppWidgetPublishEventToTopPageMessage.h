@class NSNumber, NSString, NSDictionary;

@interface WxaLiteAppWidgetPublishEventToTopPageMessage : NSObject

@property (retain, nonatomic) NSNumber *appUuid;
@property (retain, nonatomic) NSNumber *nodeId;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *data;

+ (id)makeWithAppUuid:(id)a0 nodeId:(id)a1 eventName:(id)a2 data:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
