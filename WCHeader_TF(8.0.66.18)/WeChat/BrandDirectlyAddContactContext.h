@class NSString;

@interface BrandDirectlyAddContactContext : NSObject

@property (retain, nonatomic) NSString *username;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *sceneNote;
@property (nonatomic) unsigned int subScene;
@property (nonatomic) unsigned int productId;
@property (copy, nonatomic) NSString *finderBuffer;
@property (nonatomic) BOOL subscribeBizLive;
@property (copy, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSString *articleUrl;

- (void).cxx_destruct;

@end
