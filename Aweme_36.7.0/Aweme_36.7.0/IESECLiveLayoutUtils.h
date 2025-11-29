@class NSCache;

@interface IESECLiveLayoutUtils : NSObject

@property (retain, nonatomic) NSCache *promotionCardLayoutConfigCache;

+ (id)promotionCardLayoutConfigWithThemes:(id)a0;
+ (id)setupNewCache;
+ (id)keyForThemesArray:(id)a0;
+ (id)skinConfigWithThemes:(id)a0 module:(id)a1 normalConfig:(id)a2;
+ (id)sharedInstance;
+ (id)mergeDictionary:(id)a0 withDictionary:(id)a1;

- (void).cxx_destruct;

@end
