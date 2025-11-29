@class NSString, WCFinderEventDelegate, WCFinderFeedContentVM, WCFinderReuseQueue, WCFinderMSActivityCellUIModel;

@interface WCFinderMSActivityBaseCell : UITableViewCell <WCFinderMemeberShipExt, WCFinderMSActivityCellProtocol>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderEventDelegate *delegate;
@property (retain, nonatomic) WCFinderReuseQueue *reuseQueue;
@property (retain, nonatomic) WCFinderMSActivityCellUIModel *uiModel;
@property (nonatomic) BOOL isAuthorScene;
@property (copy, nonatomic) NSString *finderUsername;
@property (nonatomic) BOOL showSeparatorLine;
@property (copy, nonatomic) NSString *cellIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })calculateDisplaySize:(struct CGSize { double x0; double x1; })a0 forVM:(id)a1 cellIdentifier:(id)a2 showSceneIntroduce:(BOOL)a3;
+ (void)prepareForReuseQueue:(id)a0;
+ (id)cellIdentifier;
+ (id)genDescTextViewConfigWithMaxDisplayLine:(unsigned long long)a0 content:(id)a1 forVM:(id)a2;
+ (id)genCommentTextViewConfigWithMaxDisplayLine:(unsigned long long)a0 content:(id)a1 isExpand:(BOOL)a2 forVM:(id)a3;
+ (id)genLikeListTextViewConfigWithMaxDisplayLine:(unsigned long long)a0 content:(id)a1 forVM:(id)a2;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)handleHighLightBG:(id)a0;
- (void)showHighLightBG;
- (void)setViewModel:(id)a0 delegate:(id)a1 isAuthorScene:(BOOL)a2 finderUsername:(id)a3 showSeparatorLine:(BOOL)a4 cellIdentifier:(id)a5;
- (void)onContentVMChanged;
- (void)onCellDidEndDisplay;
- (void)reloadCellSize;
- (void)onLongPress:(id)a0;
- (void).cxx_destruct;

@end
