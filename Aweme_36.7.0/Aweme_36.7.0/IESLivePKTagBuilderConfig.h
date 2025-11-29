@class UIFont;

@interface IESLivePKTagBuilderConfig : NSObject

@property (nonatomic) struct CGSize { double width; double height; } tagIconSize;
@property (retain, nonatomic) UIFont *tagFont;
@property (nonatomic) double tagIconInsidePadding;
@property (nonatomic) double tagSpaceH;
@property (nonatomic) double spaceH;
@property (nonatomic) BOOL useLegacyPadding;
@property (nonatomic) long long battleInvitePanelOpt;
@property (nonatomic) BOOL disableBackground;

- (void).cxx_destruct;
- (id)init;

@end
