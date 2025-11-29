@interface FlowKit.FlowVideoListViewController : FlowCommon.FlowBaseViewController {
    void /* unknown type, empty encoding */ pagerContainer;
    void /* unknown type, empty encoding */ requester;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ pageId;
    void /* unknown type, empty encoding */ videoOpenPlayer;
    void /* unknown type, empty encoding */ lastVideoOpenPlayer;
    void /* unknown type, empty encoding */ playerIdentifier;
    void /* unknown type, empty encoding */ currentPlayItemID;
    void /* unknown type, empty encoding */ isActive;
    void /* unknown type, empty encoding */ responseList;
    void /* unknown type, empty encoding */ lastItemTuple;
    void /* unknown type, empty encoding */ playIdList;
    void /* unknown type, empty encoding */ quickLoadmoreCompletion;
    void /* unknown type, empty encoding */ quickLoadmoreInner;
    void /* unknown type, empty encoding */ quickLoadmoreResponse;
    void /* unknown type, empty encoding */ quickLoadBeginTime;
    void /* unknown type, empty encoding */ needInsertPreset;
    void /* unknown type, empty encoding */ presetResponse;
    void /* unknown type, empty encoding */ $__lazy_storage_$_presetCover;
    void /* unknown type, empty encoding */ $__lazy_storage_$_closeButton;
    void /* unknown type, empty encoding */ bottomLoadView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandSliderView;
}

- (id)flow_trackParametersWith:(id)a0;
- (void)closeBtnClick;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
