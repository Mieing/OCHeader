@class NSString, NSDictionary;

@interface AWEMusicDSPEventModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *actionSheetName;
@property (copy, nonatomic) NSString *collectionEnterFrom;
@property (copy, nonatomic) NSString *openMethod;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *enterMiniMethod;
@property (copy, nonatomic) NSString *fromItemId;
@property (copy, nonatomic) NSString *fromMetaSongId;
@property (copy, nonatomic) NSString *sceneName;
@property (copy, nonatomic) NSString *miniPage;
@property (copy, nonatomic) NSString *miniSubPage;
@property (copy, nonatomic) NSString *fromGroupId;
@property (copy, nonatomic) NSString *fromGroupType;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *groupType;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSString *fromSubPage;

- (id)pageParams;
- (id)lunaClone;
- (id)entranceParams;
- (void).cxx_destruct;

@end
