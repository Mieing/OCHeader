@class AWEPlayInteractionDescriptionContext, NSString;

@interface AWEPlayInteractionDescriptionVideoDurationController : NSObject <AWEPlayInteractionDescriptionRenderProtocol, AWEPlayInteractionDescriptionParserProtocol, AWEPlayInteractionDescriptionLifeCycleProtocol>

@property (weak, nonatomic) AWEPlayInteractionDescriptionContext *descriptionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPlainTextTailLabelWithAttributedText:(id)a0;
+ (Class)aAWEPlayInteractionDescriptionElementAdapterClass;
+ (id)getVideoDurationAttributedStringWithModel:(id)a0 referString:(id)a1;
+ (id)getVideoFormatDurationStringWithModel:(id)a0 contentMode:(long long)a1 referString:(id)a2;
+ (id)videoDurationFont;

- (id)getTailExtraModelWithContext:(id)a0;
- (id)calculateTruncationTokenWithContext:(id)a0;
- (id)setTruncationTokenIfNeedWithContext:(id)a0;
- (void)didRenderDescriptionElement:(id)a0;
- (BOOL)canShowTailMore;
- (id)aAWEPlayInteractionDescriptionElementAdapter;
- (void).cxx_destruct;

@end
