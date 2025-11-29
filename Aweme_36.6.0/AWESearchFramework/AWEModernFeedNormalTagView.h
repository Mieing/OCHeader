@class AWEModernFeedTagFrame, NSString, NSDictionary, AWEAnchorNormalInfoModel, UIView, AWEAwemeModel;
@protocol AWESearchTagViewJumpProtocol, AWESearchTagViewUIInfoProtocol, AWESearchTagViewTrackProtocol;

@interface AWEModernFeedNormalTagView : UIView

@property (retain, nonatomic) UIView<AWESearchTagViewUIInfoProtocol> *searchTagView;
@property (retain, nonatomic) NSString *searchKeyword;
@property (retain, nonatomic) id<AWESearchTagViewTrackProtocol> tagTrackManager;
@property (retain, nonatomic) id<AWESearchTagViewJumpProtocol> tagJumpManager;
@property (retain, nonatomic) AWEAnchorNormalInfoModel *normalInfoModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEModernFeedTagFrame *tagFrame;
@property (retain, nonatomic) NSDictionary *logData;

- (void)updateLayoutWithFrame:(id)a0;
- (void)sendShowEvent;
- (void)singleTapped:(id)a0;
- (void)configWithModel:(id)a0 searchKeyWord:(id)a1 withLogData:(id)a2;
- (void)reuseAnchor;
- (void)configWithModel:(id)a0 searchKeyWord:(id)a1 withLogData:(id)a2 referString:(id)a3;
- (void)setModelOnly:(id)a0 searchKeyWord:(id)a1 withLogData:(id)a2 referString:(id)a3;
- (BOOL)enableBcmSupport;
- (void)sendClickEvent;
- (void).cxx_destruct;

@end
