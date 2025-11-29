@class NSString;

@interface LinkLocationJumpInfo : NSObject

@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString *districtId;
@property (copy, nonatomic) NSString *img;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *province;
@property (copy, nonatomic) NSString *type;

+ (id)makeWithAddress:(id)a0 city:(id)a1 id:(id)a2 districtId:(id)a3 img:(id)a4 latitude:(id)a5 longitude:(id)a6 name:(id)a7 poiId:(id)a8 province:(id)a9 type:(id)a10;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
