@class BizPoiSelectCallbackTypeBox, NSNumber, NSString;

@interface BizPoiSelectResult : NSObject

@property (retain, nonatomic) BizPoiSelectCallbackTypeBox *type;
@property (retain, nonatomic) NSNumber *ignorePoi;
@property (retain, nonatomic) NSNumber *longitude;
@property (retain, nonatomic) NSNumber *latitude;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *districtId;
@property (copy, nonatomic) NSString *content;

+ (id)makeWithType:(id)a0 ignorePoi:(id)a1 longitude:(id)a2 latitude:(id)a3 poiId:(id)a4 name:(id)a5 address:(id)a6 districtId:(id)a7 content:(id)a8;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
