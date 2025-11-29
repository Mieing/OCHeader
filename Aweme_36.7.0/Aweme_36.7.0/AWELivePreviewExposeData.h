@class AWELivePreviewIMExtend, NSString, AWELivePreviewGuide, NSArray, AWELivePreviewExtendArea, AWELivePreviewExitGuide, AWELivePreviewGrowthTask, AWELiveEnterPublicAreaAnimation, NSMutableArray, AWELiveiosClientComponent, AWELivePreviewExposeSwitch;

@interface AWELivePreviewExposeData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long style;
@property (retain, nonatomic) NSArray *metas;
@property (retain, nonatomic) NSArray *chatMsgs;
@property (retain, nonatomic) NSArray *forceInsertion;
@property (nonatomic) long long scrollAfterMs;
@property (nonatomic) long long messageScrollAfterMs;
@property (nonatomic) long long messageScrollIntervalMs;
@property (retain, nonatomic) AWELivePreviewGuide *previewGuide;
@property (retain, nonatomic) AWELivePreviewExitGuide *previewExitGuide;
@property (retain, nonatomic) NSArray *previewExitGuideListArray;
@property (retain, nonatomic) AWELiveiosClientComponent *iosClientComponent;
@property (retain, nonatomic) NSString *previewIntro;
@property (retain, nonatomic) AWELivePreviewExtendArea *previewExtendArea;
@property (nonatomic) long long showUvPv;
@property (nonatomic) long long showNameAbbreviation;
@property (retain, nonatomic) AWELivePreviewExposeSwitch *switch_p;
@property (nonatomic) long long isPreviewUseWebsocket;
@property (retain, nonatomic) NSMutableArray *etData;
@property (retain, nonatomic) NSMutableArray *consume;
@property (retain, nonatomic) NSMutableArray *wait;
@property (nonatomic) BOOL isAwemeVideoFeed;
@property (nonatomic) BOOL showPreViewCards;
@property (retain, nonatomic) AWELivePreviewIMExtend *previewImExtend;
@property (retain, nonatomic) AWELivePreviewGrowthTask *growthTask;
@property (retain, nonatomic) AWELiveEnterPublicAreaAnimation *enterPublicAreaAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFromOriginRoomModel:(id)a0 withOrigin:(id)a1;

- (void).cxx_destruct;

@end
