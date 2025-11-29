@class NSString;
@protocol ACCEditorCoreSticker, ACCCreationContext;

@interface ACCEditorCoreImpl : NSObject <ACCNLEProvider, ACCEditorCore>

@property (weak, nonatomic) id<ACCCreationContext> context;
@property (retain, nonatomic) id<ACCEditorCoreSticker> sticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)nle;
- (void)resetPlayerViewSize:(struct CGSize { double x0; double x1; })a0;
- (id)getPlayerViews;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (double)totalDuration;

@end
