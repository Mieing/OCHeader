@class NSString;

@interface TemplateWeappOPWrap : NSObject <NSCopying>

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int weappVersion;
@property (nonatomic) unsigned int weappState;
@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *imageUrl;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
