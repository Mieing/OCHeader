@class NSString, NSArray;

@interface DVEEffectCategory : NSObject <DVEResourceCategoryModelProtocol>

@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) long long order;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *models;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
