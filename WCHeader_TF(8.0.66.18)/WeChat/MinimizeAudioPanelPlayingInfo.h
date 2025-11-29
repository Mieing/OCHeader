@class NSString, NSData;

@interface MinimizeAudioPanelPlayingInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int bizType;
@property (copy, nonatomic) NSString *bizId;
@property (retain, nonatomic) NSData *contextData;
@property (nonatomic) unsigned int bizSubType;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL shouldShowFloatingView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned int tapeType;
@property (copy, nonatomic) NSString *tapeName;
@property (copy, nonatomic) NSString *tapeDesc;
@property (copy, nonatomic) NSString *tapeCoverUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_bizType;
+ (void)PBArrayAdd_bizId;
+ (void)PBArrayAdd_contextData;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_tapeName;
+ (void)PBArrayAdd_tapeDesc;
+ (void)PBArrayAdd_tapeCoverUrl;
+ (void)PBArrayAdd_tapeType;
+ (void)PBArrayAdd_bizSubType;
+ (void)initialize;

- (id)getTapeName;
- (id)getTapeDescription;
- (id)getTapeCover;
- (BOOL)isTapeCoverRounded;
- (id)copyPlayingInfo;
- (BOOL)isSamePlayingInfo:(id)a0;
- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
