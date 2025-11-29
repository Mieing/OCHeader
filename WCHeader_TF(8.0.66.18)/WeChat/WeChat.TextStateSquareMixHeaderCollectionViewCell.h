@class NSString;

@interface WeChat.TextStateSquareMixHeaderCollectionViewCell : UICollectionViewCell <TextStateMgrExt> {
    void /* unknown type, empty encoding */ hostVC;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ isViewLoaded;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ squareReporter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ historyModel;
@property (nonatomic, readonly) double prefferedHeidht;
@property (nonatomic, copy) id /* block */ onTapMoreHandler;
@property (nonatomic, copy) id /* block */ onTapPublishHandler;
@property (nonatomic) BOOL showPublishFailTip;
@property (nonatomic) BOOL friendsHaveStatus;
@property (nonatomic, readonly) NSString *myStatusListInfo;

- (void)onTextStateUpdateForUserName:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)updateDataWithAnimated:(BOOL)a0;
- (void)didMoveToWindow;
- (void)setOnTapHistoryStatusWithHandelr:(id /* block */)a0;
- (void)setOnTapRepublishWithHandler:(id /* block */)a0;
- (void)setOnTapMessageBoxWithHandler:(id /* block */)a0;
- (void)setOnUpdateHeightWithHandler:(id /* block */)a0;
- (void)setMessageBoxInfo:(id)a0;
- (void).cxx_destruct;

@end
