@interface AWECommentBusinessServiceContainerViewController : UIViewController <AWECommentListServiceContainerProtocol> {
    void /* unknown type, empty encoding */ contextDelegate;
    void /* unknown type, empty encoding */ serviceViewModel;
    void /* unknown type, empty encoding */ businessHolder;
    void /* unknown type, empty encoding */ didRegister;
}

- (void)changeServiceContainerPage:(id)a0;
- (void)serviceContainerViewDidLoad:(id)a0;
- (void)serviceContainerRegisterReusableView:(id)a0;
- (long long)serviceContainerList:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)serviceContainerList:(id)a0 reusableViewForRowAtIndexPath:(id)a1;
- (void)serviceContainerList:(id)a0 cellOfContainer:(id)a1 atIndexPath:(id)a2;
- (double)serviceContainerList:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)serviceContainerList:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)serviceContainerList:(id)a0 heightForFooterInSection:(long long)a1;
- (id)serviceContainerList:(id)a0 viewForHeaderAtIndexPath:(id)a1;
- (id)serviceContainerList:(id)a0 viewForFooterAtIndexPath:(id)a1;
- (void)serviceContainerList:(id)a0 willDisplayReusableView:(id)a1 forRowAtIndexPath:(id)a2;
- (void)serviceContainerList:(id)a0 didEndDisplayingReusableView:(id)a1 forRowAtIndexPath:(id)a2;
- (void)serviceContainerList:(id)a0 willDisplayHeaderView:(id)a1 forRowAtIndexPath:(id)a2;
- (void)serviceContainerList:(id)a0 didEndDisplayingHeaderView:(id)a1 forRowAtIndexPath:(id)a2;
- (void)serviceContainerList:(id)a0 willDisplayFooterView:(id)a1 forRowAtIndexPath:(id)a2;
- (void)serviceContainerList:(id)a0 didEndDisplayingFooterView:(id)a1 forRowAtIndexPath:(id)a2;
- (void)serviceContainerList:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
