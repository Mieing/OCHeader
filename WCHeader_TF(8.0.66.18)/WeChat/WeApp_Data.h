@class NSString, NSNumber, FlutterStandardTypedData;

@interface WeApp_Data : NSObject

@property (copy, nonatomic) NSString *appid;
@property (retain, nonatomic) NSNumber *version_type;
@property (retain, nonatomic) FlutterStandardTypedData *data_buffer;
@property (copy, nonatomic) NSString *path;

+ (id)makeWithAppid:(id)a0 version_type:(id)a1 data_buffer:(id)a2 path:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
