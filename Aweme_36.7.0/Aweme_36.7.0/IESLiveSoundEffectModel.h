@class NSString, NSArray, IESEffectModel;

@interface IESLiveSoundEffectModel : IESLiveDynamicModel

@property (nonatomic) unsigned long long soundID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *iconURLs;
@property (retain, nonatomic) IESEffectModel *effectModel;
@property (copy, nonatomic) NSString *sourcePath;
@property (nonatomic) BOOL isNew;
@property (readonly, nonatomic) BOOL isOriginal;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithEffect:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
