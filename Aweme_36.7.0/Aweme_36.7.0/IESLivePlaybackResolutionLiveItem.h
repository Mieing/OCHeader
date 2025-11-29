@class NSString, HTSLiveDefinitionInfo;

@interface IESLivePlaybackResolutionLiveItem : NSObject

@property (nonatomic) unsigned long long videoType;
@property (retain, nonatomic) NSString *cellName;
@property (retain, nonatomic) NSString *buttonName;
@property (retain, nonatomic) NSString *trackName;
@property (readonly, nonatomic) BOOL hasDefinitionInfo;
@property (retain, nonatomic) HTSLiveDefinitionInfo *definitionInfo;
@property (nonatomic) BOOL isEngineSupported;
@property (readonly, nonatomic) NSString *streamVideoType;

- (id)initLiveWithKey:(id)a0 rawName:(id)a1;
- (id)initVideoWithKey:(unsigned long long)a0;
- (id)initStreamVideoWithKey:(id)a0;
- (void).cxx_destruct;

@end
