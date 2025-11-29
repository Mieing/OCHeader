@class NSString, NSArray;

@interface WxaLiteAppWidgetUnsubscribeStoreMessage : NSObject

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) NSArray *pointers;

+ (id)makeWithAppId:(id)a0 pointers:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
