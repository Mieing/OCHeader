@class AWEPadKeyboardDoubleSpeedPlayTipsView, NSString;

@interface AWEPadKeyboardProgressControl : NSObject <AWEPadKeyboardProgressControlProtocol>

@property (retain, nonatomic) AWEPadKeyboardDoubleSpeedPlayTipsView *doubleSpeedTipsView;
@property (copy, nonatomic) id /* block */ seekOffsetBlk;
@property (copy, nonatomic) id /* block */ isActiviteBlk;
@property (copy, nonatomic) id /* block */ trackParamsBlk;
@property (copy, nonatomic) id /* block */ doubleSpeedPlayBeginBlk;
@property (copy, nonatomic) id /* block */ doubleSpeedPlayEndBlk;
@property (nonatomic) BOOL longPressSeekBackBegin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)trackKeyEvent:(id)a0 key:(id)a1 clickType:(id)a2;
- (void)addHandleForSeekOffset:(id /* block */)a0 isActivite:(id /* block */)a1 tackParams:(id /* block */)a2 doubleSpeedPlayBegin:(id /* block */)a3 doubleSpeedPlayEnd:(id /* block */)a4;
- (void)setKeybindings;
- (void)longPressSeekBack;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
