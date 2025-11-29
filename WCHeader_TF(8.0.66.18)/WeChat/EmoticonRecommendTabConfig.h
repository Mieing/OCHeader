@interface EmoticonRecommendTabConfig : NSObject

@property (nonatomic) BOOL enableRecommendTab;
@property (nonatomic) BOOL useLocalModel;
@property (nonatomic) BOOL recommendTabPlayGif;
@property (nonatomic) BOOL customTabPlayGif;

- (id)init;

@end
