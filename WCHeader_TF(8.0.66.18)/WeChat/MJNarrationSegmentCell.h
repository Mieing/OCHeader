@class MJVoiceLabel, MJNarrationSegmentViewModel, MJCaptionErrorTipLabel, MJMuteLabel;

@interface MJNarrationSegmentCell : MJAudioSegmentCell

@property (retain, nonatomic) MJNarrationSegmentViewModel *narrationSegmentVM;
@property (nonatomic) struct map<OMCCaptionItem *, MJCaptionLabel *, OMCCaptionItemCompare, std::allocator<std::pair<OMCCaptionItem *const, MJCaptionLabel *>>> { struct __tree<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, std::__map_value_compare<OMCCaptionItem *, std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, OMCCaptionItemCompare>, std::allocator<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<OMCCaptionItem *, std::__value_type<OMCCaptionItem *, MJCaptionLabel *>, OMCCaptionItemCompare>> { unsigned long long __value_; } __pair3_; } __tree_; } labelsByCaptionItem;
@property (retain, nonatomic) MJVoiceLabel *recognizingTipLabel;
@property (retain, nonatomic) MJCaptionErrorTipLabel *sttErrorTipLabel;
@property (retain, nonatomic) MJCaptionErrorTipLabel *stsErrorTipLabel;
@property (retain, nonatomic) MJVoiceLabel *voiceLabel;
@property (retain, nonatomic) MJMuteLabel *muteLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentBounds;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (id)captionLabelWithText:(id)a0;
- (void)setupCaptionLabels;
- (void)showCaptionLabelsAnimated:(BOOL)a0;
- (void)hideCaptionLabelsAnimated:(BOOL)a0;
- (void)updateVoiceLabel;
- (void)updateMuteLabel;
- (void)layoutCaptionLabel:(id)a0 withTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;
- (void)layoutSTTErrorTipLabel;
- (void)layoutSTSErrorTipLabel;
- (void)layoutSTSErrorTipLabelIfNeeded;
- (void)layoutRecognitionTipLabel;
- (void)layoutCaptionLabels;
- (void)prepareForReuse;
- (void)setupWithSegmentViewModel:(id)a0;
- (void)syncWithMutation;
- (BOOL)checkViewModel;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
