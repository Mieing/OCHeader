@class NSDictionary, NSString;

@interface CECMomentCameraModeFactoryImpl : NSObject <CECRecordModeFactory>

@property (copy, nonatomic) NSDictionary *modeMapDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)modeWithIdentifier:(long long)a0;
- (id)displayModesArray;
- (id)momentCombinedMode;
- (id)momentMode;
- (id)generateMomentCombinedModeSubModeIds;
- (id)generateMomentCombinedModeSubModesDict:(id)a0;
- (id)tabConfigWithTitle:(id)a0 forMode:(id)a1;
- (id)createNewModeWithIdentifier:(long long)a0;
- (void).cxx_destruct;
- (id)textMode;
- (id)audioMode;

@end
