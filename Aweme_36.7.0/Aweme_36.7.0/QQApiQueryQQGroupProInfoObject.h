@class NSString;

@interface QQApiQueryQQGroupProInfoObject : QQApiObject

@property (retain, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *org_id;
@property (copy, nonatomic) NSString *world_id;
@property (copy, nonatomic) NSString *openKey;
@property (copy, nonatomic) NSString *openID;

- (id)queryURLString;
- (BOOL)hasNilField;
- (void).cxx_destruct;

@end
