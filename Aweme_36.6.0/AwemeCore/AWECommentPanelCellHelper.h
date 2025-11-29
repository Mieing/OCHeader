@class NSString;

@interface AWECommentPanelCellHelper : NSObject <AWECommentPanelCellHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)matchEmoticonForAttributedString:(id)a0;
+ (id)getUserName:(id)a0;
+ (id)matchEmoticonToAccessibilityLabel:(id)a0;
+ (void)transferToProfileWithURL:(id)a0 userModel:(id)a1;
+ (double)cellHeightDiffBeforeAndAfterFolding:(double)a0 comment:(id)a1;
+ (id)defaultAvatarImage;
+ (void)transferToProfileWithURL:(id)a0 userModel:(id)a1 adModel:(id)a2;
+ (id)verticalPathWithHeight:(double)a0;
+ (id)commentBundle;
+ (id)avatarImageWithColor:(id)a0;
+ (double)cellStillHeightCommentContentHiddenForSubComment:(BOOL)a0;


@end
