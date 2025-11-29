@class NSString, AWEAwemeModel;

@interface AWEInspirationAwemeListDataController : AWEListDataController

@property (copy, nonatomic) NSString *offset;
@property (copy, nonatomic) NSString *musicID;
@property (copy, nonatomic) AWEAwemeModel *enterModel;
@property (readonly, nonatomic) unsigned long long inspirationType;

- (id)networkRequestCommonParams;
- (void)weakBindInspirationModel:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
