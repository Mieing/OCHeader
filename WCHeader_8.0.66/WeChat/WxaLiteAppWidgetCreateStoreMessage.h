@class NSString, NSNumber;

@interface WxaLiteAppWidgetCreateStoreMessage : NSObject

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) NSNumber *aliveSeconds;
@property (retain, nonatomic) NSNumber *waitDownload;
@property (retain, nonatomic) NSNumber *downloadTimeout;

+ (id)makeWithAppId:(id)a0 aliveSeconds:(id)a1 waitDownload:(id)a2 downloadTimeout:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
