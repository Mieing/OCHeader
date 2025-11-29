@class NSString;

@interface WASourceWeappInfo : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *enterPath;
@property (copy, nonatomic) NSString *forwardSceneNote;
@property (nonatomic) unsigned int showSourceView;
@property (nonatomic) unsigned int versionType;
@property (nonatomic) unsigned long long timestamp;

+ (id)fromXML:(void *)a0;

- (id)toXML;
- (void).cxx_destruct;

@end
