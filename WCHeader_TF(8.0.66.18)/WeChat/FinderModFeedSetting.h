@class NSString, FinderOriginalDesc;

@interface FinderModFeedSetting : WXPBGeneratedMessage

@property (nonatomic) unsigned long long objectid;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSString *objectNonceId;
@property (retain, nonatomic) FinderOriginalDesc *originalInfoDesc;
@property (retain, nonatomic) NSString *exportId;

+ (void)initialize;

@end
