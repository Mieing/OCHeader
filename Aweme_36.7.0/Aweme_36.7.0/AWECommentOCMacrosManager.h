@class NSString;

@interface AWECommentOCMacrosManager : NSObject <AWECommentOCMacrosManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commentGeneralViewAnchor;
+ (BOOL)shouldShowCommentHeadView:(id)a0;
+ (id)gameCPViewAnchorModel:(id)a0;
+ (id)generalViewAnchorModel:(id)a0;
+ (id)adMannorCommentGuideView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (id)adCommentGuideView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)shouldInsertAdMannorComment:(id)a0;
+ (long long)componentIDWithAWEAwemeModel:(id)a0;
+ (BOOL)adMannorCommentEnable:(id)a0;
+ (id)commentSearchAnchorView;


@end
