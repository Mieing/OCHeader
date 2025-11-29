@class NSString, NSNumber;

@interface BrandEcsProductShareWeappItem : NSObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *usrname;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *sourceDisplayName;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *bizType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *imageUrl;

+ (id)makeWithAppid:(id)a0 usrname:(id)a1 iconUrl:(id)a2 sourceDisplayName:(id)a3 path:(id)a4 bizType:(id)a5 title:(id)a6 desc:(id)a7 imageUrl:(id)a8;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
