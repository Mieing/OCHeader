@class NSNumber, NSDictionary;

@interface WxaLiteAppWidgetTapEventMessage : NSObject

@property (retain, nonatomic) NSNumber *appUuid;
@property (retain, nonatomic) NSDictionary *params;

+ (id)makeWithAppUuid:(id)a0 params:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
