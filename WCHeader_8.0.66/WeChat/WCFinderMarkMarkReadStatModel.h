@class NSString;

@interface WCFinderMarkMarkReadStatModel : NSObject <PBCoding>

@property (retain, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long markReadScene;
@property (nonatomic) unsigned long long markReadSubScene;
@property (nonatomic) int commentScene;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *sessionBuffer;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long index;
@property (nonatomic) unsigned long long areaId;
@property (nonatomic) unsigned long long autoPlayTimeMs;
@property (nonatomic) BOOL autoPlayWithSound;
@property (nonatomic) unsigned long long startExposeMs;
@property (nonatomic) unsigned long long effectiveExposeTimeMs;
@property (nonatomic) unsigned long long startEffectiveExposeTimeMs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_markReadScene;
+ (void)PBArrayAdd_markReadSubScene;
+ (void)PBArrayAdd_commentScene;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_index;
+ (void)PBArrayAdd_autoPlayTimeMs;
+ (void)PBArrayAdd_autoPlayWithSound;
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_areaId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithScene:(unsigned long long)a0 subScene:(unsigned long long)a1 tid:(id)a2 commentScene:(int)a3 sessionBuffer:(id)a4;
- (id)initWithScene:(unsigned long long)a0 subScene:(unsigned long long)a1 tid:(id)a2 commentScene:(int)a3 sessionBuffer:(id)a4 duration:(long long)a5;
- (id)initWithScene:(unsigned long long)a0 subScene:(unsigned long long)a1 tid:(id)a2 commentScene:(int)a3 sessionBuffer:(id)a4 duration:(long long)a5 autoPlayTimeMs:(unsigned long long)a6 autoPlayWithSound:(BOOL)a7 startExposeMs:(unsigned long long)a8 actionType:(long long)a9 effectiveExposeTimeMs:(unsigned long long)a10 startEffectiveExposeTimeMs:(unsigned long long)a11 areaId:(unsigned long long)a12;
- (void).cxx_destruct;

@end
