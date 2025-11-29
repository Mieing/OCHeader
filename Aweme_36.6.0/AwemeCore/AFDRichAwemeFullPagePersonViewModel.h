@class NSString;

@interface AFDRichAwemeFullPagePersonViewModel : AFDRichAwemeFullPageBaseViewModel

@property (retain, nonatomic) NSString *pageTypeString;
@property (nonatomic) BOOL showDecoration;

- (void)trackRelationRecommend:(id)a0;
- (void)addClickSearchResultVideoTrackForParams:(id)a0;
- (id)routerURLForUserDetailWithEnterMethod:(id)a0;
- (void)trackEnterPersonalDetailWithEnterMethod:(id)a0;
- (void).cxx_destruct;

@end
