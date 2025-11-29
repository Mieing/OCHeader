@class NSString, ACCDuetLayoutTrackModel, IESEffectModel, VEComposerInfo;

@interface ACCDuetLayoutModel : NSObject

@property (retain, nonatomic) IESEffectModel *effect;
@property (nonatomic) unsigned long long switchType;
@property (nonatomic) BOOL toggled;
@property (retain, nonatomic) VEComposerInfo *node;
@property (nonatomic) BOOL enable;
@property (retain, nonatomic) ACCDuetLayoutTrackModel *trackModel;
@property (retain, nonatomic) NSString *duetLayout;

- (long long)duetLayoutIndexOf:(id)a0;
- (void).cxx_destruct;
- (id)initWithEffect:(id)a0;

@end
