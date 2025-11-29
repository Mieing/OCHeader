@class NSString, NSDictionary;

@interface AWEStudioVideoPublishExtraModel : NSObject

@property (copy, nonatomic) NSString *ironManID;
@property (copy, nonatomic) NSString *ironManPath;
@property (copy, nonatomic) NSString *ironManTitle;
@property (copy, nonatomic) NSString *ironManDescription;
@property (copy, nonatomic) NSString *aliasID;
@property (copy, nonatomic) NSString *videoSource;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *cardCore;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (void)setupModelWithDic:(id)a0;
- (id)toUpdateDictionary;
- (id)appModel;
- (id)initWithAppModel:(id)a0;
- (id)initWithDic:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;

@end
