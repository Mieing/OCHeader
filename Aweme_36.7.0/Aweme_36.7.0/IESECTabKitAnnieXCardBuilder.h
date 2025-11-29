@class NSDictionary;
@protocol IESECTabKitTemplateProvider;

@interface IESECTabKitAnnieXCardBuilder : NSObject

@property (nonatomic) BOOL enableSSR;
@property (weak, nonatomic) id<IESECTabKitTemplateProvider> templateProvider;
@property (nonatomic) BOOL supportSSR;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *initialData;

- (void).cxx_destruct;

@end
