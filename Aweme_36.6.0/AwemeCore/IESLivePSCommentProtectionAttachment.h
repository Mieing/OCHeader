@class IESLivePublicScreenView, NSString, GetCommentControlStatusResponse, NSArray, IESLivePSCommentProtectionItemView, IESLivePSActionSheetItem, IESLivePSCommentProtectionApi, HTSEventContext, HTSLiveTemplateParser, IESLivePublicScreenContext;

@interface IESLivePSCommentProtectionAttachment : NSObject <IESLivePSCommonAttachmentProtocol>

@property (nonatomic) BOOL commentProtectionSwitch;
@property (copy, nonatomic) NSString *managerPageSchema;
@property (retain, nonatomic) IESLivePSCommentProtectionApi *api;
@property (retain, nonatomic) HTSLiveTemplateParser *templateParser;
@property (weak, nonatomic) IESLivePSActionSheetItem *currentItem;
@property (retain, nonatomic) GetCommentControlStatusResponse *controlStatus;
@property (retain, nonatomic) NSArray *controlDisplayTexts;
@property (nonatomic) BOOL hadFetchDataWhenShow;
@property (nonatomic) double estimatedItemWidth;
@property (nonatomic) double estimatedItemHeight;
@property (weak, nonatomic) IESLivePSCommentProtectionItemView *itemView;
@property (nonatomic) BOOL enableFixTableViewCrash;
@property (weak, nonatomic) IESLivePublicScreenView *publicScreenView;
@property (retain, nonatomic) IESLivePublicScreenContext *publicScreenContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ didAttach;
@property (copy, nonatomic) id /* block */ didDetach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldActive;
- (void)introductionIconDidClick;
- (id)abilityProtocol;
- (void)addPSActionSheetItemCommentProtection;
- (void)fetchCommentControlStatusIfNeed;
- (BOOL)shouldShowCommentProtectionRedDot;
- (id)attrTextsWith:(id)a0 forLevel:(int)a1;
- (void)trackCommentProtectionSwitchClicked:(id)a0;
- (id)keyOfCommentProtectionRedDot;
- (BOOL)shouldFetchCommentControlStatus;
- (id)attributedTextsWithTexts:(id)a0;
- (id)attributedTextsWithDisplayTexts:(id)a0;
- (id)addTapActionWith:(id)a0 andDisplayText:(id)a1;
- (void).cxx_destruct;
- (id)type;
- (void)detach;
- (void)attach;

@end
