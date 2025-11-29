@class NSNumber, NSArray, NSString;

@interface AUCDTOFeatureCameraMusic : MTLModel <AUCMusicProtocol>

@property (nonatomic) BOOL enableDefaultMusic;
@property (nonatomic) BOOL enableSearch;
@property (copy, nonatomic) NSNumber *panelSource;
@property (copy, nonatomic) NSArray *functionFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
