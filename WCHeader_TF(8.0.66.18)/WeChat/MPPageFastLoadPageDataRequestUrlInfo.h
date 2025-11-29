@class NSString;

@interface MPPageFastLoadPageDataRequestUrlInfo : NSObject

@property (nonatomic) unsigned int lastModifyTime;
@property (copy, nonatomic) NSString *url;
@property (readonly, copy, nonatomic) NSString *identity;
@property (nonatomic) unsigned int templateType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int enterType;
@property (nonatomic) BOOL isOfflineCache;
@property (copy, nonatomic) NSString *sourceUserName;

+ (id)generateRequestUrlInfoWithForwardUrl:(id)a0 scene:(unsigned int)a1 enterType:(unsigned int)a2 sourceUserName:(id)a3;
+ (id)generateRequestUrlInfoIfSupport:(BOOL)a0 itemShowType:(unsigned int)a1 url:(id)a2 scene:(unsigned int)a3 enterType:(unsigned int)a4 sourceUserName:(id)a5;
+ (id)generateRequestUrlInfoIfSupport:(BOOL)a0 itemShowType:(unsigned int)a1 url:(id)a2 scene:(unsigned int)a3 enterType:(unsigned int)a4 isOfflineCache:(BOOL)a5 sourceUserName:(id)a6;

- (id)description;
- (void).cxx_destruct;

@end
