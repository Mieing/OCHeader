@class PACCUseCaseRegistryItem;
@protocol ACCCreationContext;

@interface PACCUseCaseExtra : NSObject

@property (weak, nonatomic) id<ACCCreationContext> context;
@property (retain, nonatomic) PACCUseCaseRegistryItem *item;

- (void).cxx_destruct;

@end
