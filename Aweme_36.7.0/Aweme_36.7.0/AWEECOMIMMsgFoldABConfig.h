@class NSMutableDictionary;

@interface AWEECOMIMMsgFoldABConfig : NSObject

@property (nonatomic) BOOL isInExperiment;
@property (nonatomic) BOOL featureEnable;
@property (nonatomic) BOOL defaultFoldEnable;
@property (retain, nonatomic) NSMutableDictionary *foldEnableMap;

- (BOOL)foldEnableWithFoldGroupKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
