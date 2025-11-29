@class NSString, ACCLokiURS, NSDictionary, AEKBasicResource;

@interface ACCAtomicEffectResourceModel : NSObject <AEKEffectResource>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long packType;
@property (retain, nonatomic) ACCLokiURS *URS;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSDictionary *features;
@property (copy, nonatomic) NSString *categoryKey;
@property (retain, nonatomic) AEKBasicResource *basicResource;
@property (readonly, nonatomic) BOOL newToolChain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
