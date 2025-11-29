@class NSNumber;

@interface WxaLiteAppWidgetNavigateBackMessage : NSObject

@property (retain, nonatomic) NSNumber *appUuid;
@property (retain, nonatomic) NSNumber *animated;

+ (id)makeWithAppUuid:(id)a0 animated:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
