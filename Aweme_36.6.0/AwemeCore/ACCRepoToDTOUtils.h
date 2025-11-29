@class NSMapTable;

@interface ACCRepoToDTOUtils : NSObject

@property (readonly, nonatomic) NSMapTable *DTOClassToProperty;

+ (id)draftPropertyNameForClass:(Class)a0;
+ (id)shared;

- (void).cxx_destruct;
- (void)setup;

@end
