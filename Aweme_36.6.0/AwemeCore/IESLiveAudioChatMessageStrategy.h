@class NSString, NSAttributedString;

@interface IESLiveAudioChatMessageStrategy : IESLiveMessageNodeStrategy

@property (nonatomic) struct CGSize { double width; double height; } waveViewSize;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSAttributedString *nameString;
@property (copy, nonatomic) NSAttributedString *durationString;

- (struct CGSize { double x0; double x1; })innerViewSizeWithMaxLayoutWidth:(double)a0 node:(id)a1;
- (BOOL)doFilterForMessageList:(id)a0;
- (void)updateNodeOnCreated:(id)a0;
- (void)prepareDataForAttributedStringWithMessage:(id)a0;
- (id)localNameColor;
- (void)addTapActionWithNode:(id)a0;
- (void)configUIWithNode:(id)a0;
- (void)addAccessibilityStringTo:(id)a0;
- (void)updateNameStringAttachmentIfNeed:(id)a0;
- (struct CGSize { double x0; double x1; })textLayoutSizeWithAttributedString:(id)a0 layoutSize:(struct CGSize { double x0; double x1; })a1;
- (void)jointAttributedString:(id)a0 withMessage:(id)a1;
- (id)needLoadOtherImageURLsForMessage:(id)a0;
- (void).cxx_destruct;

@end
