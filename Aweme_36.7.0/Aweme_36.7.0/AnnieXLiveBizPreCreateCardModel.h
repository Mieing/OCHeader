@class NSString, NSArray, NSDictionary;
@protocol AnnieXCardModelProtocol;

@interface AnnieXLiveBizPreCreateCardModel : NSObject <AnnieLiveBizPreCreateProtocol>

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *originUrl;
@property (copy, nonatomic) NSArray *globalPropsBlockList;
@property (copy, nonatomic) NSDictionary *customGlobalProps;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (nonatomic) unsigned long long kernalType;
@property (weak, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) BOOL enableAnnieXPreCreate;
@property (nonatomic) BOOL enableAnnieXWarmup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateGlobalPropsWithProps:(id)a0;
- (void).cxx_destruct;

@end
