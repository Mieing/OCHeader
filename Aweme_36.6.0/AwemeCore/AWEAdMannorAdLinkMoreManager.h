@class AWEAwemeModel, NSString, BDMannorManager;

@interface AWEAdMannorAdLinkMoreManager : HTSService <AWEAdMannorAdLinkMoreManager>

@property (retain, nonatomic) BDMannorManager *mannorManager;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowMannorAdLinkMoreView:(id)a0;

- (id)mannorAdLinkMoreViewWithModel:(id)a0;
- (id)p_mannorContext;
- (void).cxx_destruct;

@end
