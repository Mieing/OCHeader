@interface AWEFeedTemplateAnchorMovieConfig : AWEFeedTemplateAnchorBaseConfig

- (void)handlerTemplateAnchorViewClicked;
- (id)trackerParamsForTemplateAnchorClick;
- (void)trackerForTemplateAnchorShow;
- (void)willShowDoubleLineStyleWithType:(unsigned long long)a0;
- (void)trackerForTemplateAnchorClick;
- (id)trackerCommonParamsForTemplateAnchor;
- (id)mvType;
- (id)trackerParams;
- (BOOL)isOneKeyMovie:(id)a0;
- (void)routerToNextPage;
- (BOOL)isAIRemind:(id)a0;
- (void)routerAIRemindDetail:(BOOL)a0;
- (void)routerMVDetail;
- (void)routerMVShoot;
- (id)mvTypeStrWithType:(unsigned long long)a0;

@end
