@class NSString, NSData;

@interface WCFinderBuildLiteAppConfig : NSObject

@property (copy, nonatomic) NSString *app_id;
@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *default_url;
@property (nonatomic) double height_percent;
@property (nonatomic) double half_height;
@property (nonatomic) long long open_type;
@property (nonatomic) BOOL is_transparent;
@property (nonatomic) BOOL is_forbid_rightgesture;
@property (retain, nonatomic) NSData *extraData;
@property (copy, nonatomic) NSString *mini_version;
@property (nonatomic) long long position;

- (id)toJsonStr;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
