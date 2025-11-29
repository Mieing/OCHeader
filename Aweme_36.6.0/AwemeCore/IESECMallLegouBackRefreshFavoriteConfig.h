@class NSSet;

@interface IESECMallLegouBackRefreshFavoriteConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL releaseRefreshSceneConstraints;
@property (retain, nonatomic) NSSet *pageNames;

+ (id)configWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
