@class UIImage, NSString, NSAttributedString;

@interface IESIMConversationSwiftImpl.IESIMMultiTopFloatingTipsCellBaseViewModel : NSObject {
    void /* unknown type, empty encoding */ iconView;
    void /* function */ titleText;
    void /* unknown type, empty encoding */ contentViewWidth;
    void /* unknown type, empty encoding */ contentViewHeight;
    void /* unknown type, empty encoding */ cellWidth;
    void /* unknown type, empty encoding */ labelMaxWidth;
    void /* unknown type, empty encoding */ cellHeight;
    void /* unknown type, empty encoding */ titleLabelHeight;
    void /* unknown type, empty encoding */ cellWidthScale;
    void /* unknown type, empty encoding */ cellFoldWidthScale;
    void /* unknown type, empty encoding */ topDiffBetweenCellAndContentView;
    void /* unknown type, empty encoding */ shouldDisplayRedIcon;
    void /* unknown type, empty encoding */ shouldDisplayRedNumber;
    void /* unknown type, empty encoding */ tailViewStyle;
    void /* unknown type, empty encoding */ tailOptionStyle;
    void /* unknown type, empty encoding */ shouldDisplayShadow;
    void /* unknown type, empty encoding */ uniqueId;
    void /* unknown type, empty encoding */ eventType;
    void /* unknown type, empty encoding */ didShowBlock;
    void /* unknown type, empty encoding */ didClickBlock;
    void /* unknown type, empty encoding */ didClickTailButtonBlock;
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ limitLine;
    void /* unknown type, empty encoding */ needFoldWhenClick;
    void /* unknown type, empty encoding */ assignedPriority;
    void /* unknown type, empty encoding */ sameTypeSubPriority;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ originalModel;
}

@property (nonatomic, retain) UIImage *lightIcon;
@property (nonatomic, retain) UIImage *darkIcon;
@property (nonatomic) struct CGSize { double x0; double x1; } iconViewSize;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic) BOOL didClickHighlight;
@property (nonatomic) BOOL tailOptionStyleDidChanged;
@property (nonatomic, retain) NSAttributedString *attributeTitleText;
@property (nonatomic) long long unreadNumber;

- (void).cxx_destruct;
- (id)init;

@end
