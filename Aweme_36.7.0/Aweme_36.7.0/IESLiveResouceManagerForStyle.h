@class NSArray, NSMutableDictionary;

@interface IESLiveResouceManagerForStyle : IESLiveResouceManager

@property (retain, nonatomic) NSMutableDictionary *allStyles;
@property (retain, nonatomic) NSArray *tables;

+ (void)load;

- (id)initWithAssetBundle:(id)a0 type:(id)a1;
- (id)parseFromContent:(id)a0;
- (id)parseValueStr:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;

@end
