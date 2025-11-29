@class IESLLPOIUgcBottomBarModel;

@interface IESLLPOIAsyncUIResponse : IESLLifeBaseApiModel

@property (retain, nonatomic) IESLLPOIUgcBottomBarModel *ugcBottomBar;
@property (readonly, nonatomic) BOOL hasValidUGCBottomBar;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
