@class HTSLiveAssetStruct, NSString, HTSLiveText, NSArray, NSDictionary;

@interface IESLiveGiftAssemblyCustomizeEntranceModel : NSObject

@property (retain, nonatomic) HTSLiveAssetStruct *lynxEffectModel;
@property (copy, nonatomic) NSString *schemaUrl;
@property (retain, nonatomic) HTSLiveText *entranceText;
@property (copy, nonatomic) NSString *entranceDefaultText;
@property (copy, nonatomic) NSString *toUserId;
@property (copy, nonatomic) NSArray *assetList;
@property (copy, nonatomic) NSDictionary *entranceExtraParams;

- (id)assetLocalPathStr;
- (BOOL)isEntranceSchemaReady;
- (BOOL)isEntranceEnabled;
- (void)reportCustomizeEntranceInfo;
- (void).cxx_destruct;
- (id)modelPath;
- (BOOL)isModelReady;

@end
