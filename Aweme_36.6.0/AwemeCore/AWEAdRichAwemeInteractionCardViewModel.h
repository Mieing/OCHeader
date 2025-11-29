@class NSString, YYTextLayout, AWEAwemeModel, AWEURLModel;

@interface AWEAdRichAwemeInteractionCardViewModel : NSObject <AWEAdRichAwemeInteractionCardViewModel>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) YYTextLayout *textLayout;
@property (retain, nonatomic) YYTextLayout *expandTextLayout;
@property (nonatomic) BOOL expanded;
@property (nonatomic) BOOL animatedExpand;
@property (readonly, copy, nonatomic) AWEURLModel *avatarURL;
@property (readonly, copy, nonatomic) NSString *nickName;
@property (nonatomic) unsigned long long currentImageIndex;
@property (readonly, nonatomic) double descriptionLabelInitHeight;
@property (readonly, nonatomic) double descriptionLabelExpandedHeight;
@property (readonly, nonatomic) double descriptionWidth;
@property (readonly, nonatomic) unsigned long long descriptionLineNumber;
@property (readonly, nonatomic) double maxLineDescriptionHeight;
@property (readonly, nonatomic) double expandButtonHeight;
@property (readonly, nonatomic) double expandButtonWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAweme:(id)a0;
- (unsigned long long)maxInteractionCardLineNumber;
- (id)descriptionAttributedString;
- (id)expandedStringWithTailSpace;
- (id)truncationStringWithTailSpace;
- (id)truncationAttributedString:(id)a0;
- (void)expandDescription:(BOOL)a0 animated:(BOOL)a1;
- (id)attributedTextWithExpanded:(BOOL)a0;
- (void)onClickWithTag:(id)a0 refer:(id)a1;
- (void).cxx_destruct;
- (id)attributes;
- (BOOL)canExpand;

@end
