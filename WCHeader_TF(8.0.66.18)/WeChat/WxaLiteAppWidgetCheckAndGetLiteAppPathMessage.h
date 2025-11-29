@class NSString, NSNumber;

@interface WxaLiteAppWidgetCheckAndGetLiteAppPathMessage : NSObject

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) NSNumber *checkUpdate;
@property (retain, nonatomic) NSNumber *syncCheckUpdate;

+ (id)makeWithAppId:(id)a0 checkUpdate:(id)a1 syncCheckUpdate:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
