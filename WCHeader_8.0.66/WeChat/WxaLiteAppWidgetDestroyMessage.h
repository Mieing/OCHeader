@class NSNumber;

@interface WxaLiteAppWidgetDestroyMessage : NSObject

@property (retain, nonatomic) NSNumber *appUuid;

+ (id)makeWithAppUuid:(id)a0;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
