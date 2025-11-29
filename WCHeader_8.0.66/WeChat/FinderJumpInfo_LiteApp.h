@class NSString, NSData;

@interface FinderJumpInfo_LiteApp : WXPBGeneratedMessage <WCFinderLiteAppInfoProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *defaultUrl;
@property (nonatomic) unsigned int heightPercent;
@property (nonatomic) float halfHeight;
@property (nonatomic) unsigned int openType;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) BOOL isForbidRightgesture;
@property (retain, nonatomic) NSData *extraData;
@property (retain, nonatomic) NSString *miniVersion;
@property (nonatomic) unsigned int position;
@property (nonatomic) BOOL isDragClose;
@property (nonatomic) BOOL needPreload;
@property (retain, nonatomic) NSString *snapShotInitData;
@property (nonatomic) BOOL isForbidHalfMove;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setIsForbidHalfMove:(BOOL)a0;
- (BOOL)isForbidHalfMove;
- (void)setSnapShotInitData:(id)a0;
- (id)snapShotInitData;
- (void)setNeedPreload:(BOOL)a0;
- (BOOL)needPreload;
- (void)setIsDragClose:(BOOL)a0;
- (BOOL)isDragClose;
- (void)setPosition:(unsigned int)a0;
- (unsigned int)position;
- (void)setMiniVersion:(id)a0;
- (id)miniVersion;
- (void)setExtraData:(id)a0;
- (id)extraData;
- (void)setIsForbidRightgesture:(BOOL)a0;
- (BOOL)isForbidRightgesture;
- (void)setIsTransparent:(BOOL)a0;
- (BOOL)isTransparent;
- (void)setOpenType:(unsigned int)a0;
- (unsigned int)openType;
- (void)setHalfHeight:(float)a0;
- (float)halfHeight;
- (void)setHeightPercent:(unsigned int)a0;
- (unsigned int)heightPercent;
- (void)setDefaultUrl:(id)a0;
- (id)defaultUrl;
- (void)setQuery:(id)a0;
- (id)query;
- (void)setPath:(id)a0;
- (id)path;
- (void)setAppId:(id)a0;
- (id)appId;
- (id)genFinderLiteAppInfo;
- (id)archivedWCTValue;
- (BOOL)isEqual:(id)a0;

@end
