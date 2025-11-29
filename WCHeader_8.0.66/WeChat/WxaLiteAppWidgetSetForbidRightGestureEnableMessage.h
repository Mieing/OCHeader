@class NSNumber;

@interface WxaLiteAppWidgetSetForbidRightGestureEnableMessage : NSObject

@property (retain, nonatomic) NSNumber *appUuid;
@property (retain, nonatomic) NSNumber *enable;

+ (id)makeWithAppUuid:(id)a0 enable:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
