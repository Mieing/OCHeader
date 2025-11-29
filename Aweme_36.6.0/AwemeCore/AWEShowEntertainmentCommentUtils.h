@class NSString;

@interface AWEShowEntertainmentCommentUtils : NSObject <AWEShowEntertainmentCommentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEntertainmentCommentTabEventName:(id)a0 awemeModel:(id)a1 params:(id)a2;
- (id)entertainmentCommentViewControllerWithAwemeModel:(id)a0 extraParams:(id)a1;
- (BOOL)shouldShowEntertainmentCommentTab:(id)a0;
- (id)getEntertainmentCommentTabTypeTitle:(id)a0;
- (long long)getEntertainmentTabCommentCount:(id)a0;
- (long long)getEntertainmentCommentTabMediaType:(id)a0;
- (BOOL)enableContinueVideoPlay;
- (id)getCommonParamsWithAwemeModel:(id)a0;
- (id)getEntertainmentCommentTabLynxViewSchema:(id)a0;
- (id)getParamsWithAwemeModel:(id)a0 params:(id)a1;

@end
