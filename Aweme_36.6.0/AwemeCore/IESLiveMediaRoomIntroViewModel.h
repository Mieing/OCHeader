@class HTSEventContext, IESLiveGuideModel, NSString;

@interface IESLiveMediaRoomIntroViewModel : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (nonatomic) unsigned long long liveType;
@property (retain, nonatomic) NSString *roomIntroText;

+ (void)hideRedDot;
+ (BOOL)dotShouldShow;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
