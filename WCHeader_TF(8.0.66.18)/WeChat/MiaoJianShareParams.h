@class NSArray, NSString, NSMutableArray, NSURLQueryItem;

@interface MiaoJianShareParams : NSObject

@property (retain, nonatomic) NSURLQueryItem *queryItemForScene;
@property (retain, nonatomic) NSURLQueryItem *queryItemForLaunchType;
@property (retain, nonatomic) NSURLQueryItem *queryItemForEditTab;
@property (retain, nonatomic) NSURLQueryItem *queryItemForAssetIdList;
@property (retain, nonatomic) NSURLQueryItem *queryItemForIsAutoExpandTemplate;
@property (retain, nonatomic) NSURLQueryItem *queryItemForTemplateId;
@property (retain, nonatomic) NSURLQueryItem *queryItemForMusicId;
@property (retain, nonatomic) NSURLQueryItem *queryItemForMiaoJianExtInfo;
@property (retain, nonatomic) NSURLQueryItem *queryItemForCreationProjectStr;
@property (retain, nonatomic) NSURLQueryItem *queryItemForExportedOpenWX;
@property (retain, nonatomic) NSMutableArray *queryItemListForExtKV;
@property (readonly, nonatomic) long long launchType;
@property (nonatomic) long long editTab;
@property (nonatomic) BOOL isAutoExpandTemplate;
@property (nonatomic) int exportedOpenWX;
@property (retain, nonatomic) NSArray *assetIdList;
@property (retain, nonatomic) NSString *templateId;
@property (retain, nonatomic) NSString *musicId;
@property (retain, nonatomic) NSString *miaojianExtInfo;
@property (retain, nonatomic) NSString *creationProjectStr;

- (id)initWithLaunchType:(long long)a0;
- (void)setLaunchType:(long long)a0;
- (void)addExtValue:(id)a0 forKey:(id)a1;
- (void)removeExtValuefromKey:(id)a0;
- (void)clearExtKV;
- (id)description;
- (void).cxx_destruct;

@end
