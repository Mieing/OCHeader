@class NSString, NSArray, IESGCPPBGameImageBundler, NSDictionary;

@interface IESGCPGameMetaDataGameAttributeModel : NSObject

@property (readonly, copy, nonatomic) NSString *gameName;
@property (readonly, nonatomic) unsigned long long gamePlatform;
@property (readonly, copy, nonatomic) NSString *openSchema;
@property (readonly, nonatomic) BOOL isJumpCGDirect;
@property (readonly, nonatomic) NSString *cgSchema;
@property (readonly, nonatomic) NSString *gameCategory;
@property (readonly, copy, nonatomic) IESGCPPBGameImageBundler *gameIconBundler;
@property (readonly, copy, nonatomic) NSArray *gameImageBundlerArray;
@property (readonly, copy, nonatomic) NSString *gamePlatformString;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSArray *tags;
@property (nonatomic) long long gameCategoryID;
@property (nonatomic) long long gameTagID;
@property (copy, nonatomic) NSString *gameAttribute;
@property (nonatomic) long long stage;
@property (readonly, copy, nonatomic) NSDictionary *gameAttributeCacheMap;
@property (copy, nonatomic) NSDictionary *gameCGExtra;

- (void).cxx_destruct;

@end
