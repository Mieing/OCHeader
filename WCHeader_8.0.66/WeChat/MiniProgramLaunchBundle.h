@class NSString, NSNumber;

@interface MiniProgramLaunchBundle : NSObject

@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *scene;
@property (copy, nonatomic) NSString *scene_note;
@property (copy, nonatomic) NSString *extra_data;
@property (copy, nonatomic) NSString *referrer_info_extra_data;
@property (retain, nonatomic) NSNumber *app_version;

+ (id)makeWithAppid:(id)a0 username:(id)a1 path:(id)a2 scene:(id)a3 scene_note:(id)a4 extra_data:(id)a5 referrer_info_extra_data:(id)a6 app_version:(id)a7;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
