@class NSDictionary;

@interface SystemAuthConfig : NSObject

@property (retain, nonatomic) NSDictionary *webSceneMap;
@property (nonatomic) unsigned long long version;

- (id)initWithFile:(id)a0;
- (void).cxx_destruct;

@end
