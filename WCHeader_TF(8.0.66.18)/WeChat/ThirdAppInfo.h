@class NSString, FlutterStandardTypedData;

@interface ThirdAppInfo : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) FlutterStandardTypedData *iconData;
@property (retain, nonatomic) FlutterStandardTypedData *grayIconData;

+ (id)makeWithAppId:(id)a0 name:(id)a1 iconUrl:(id)a2 iconData:(id)a3 grayIconData:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
