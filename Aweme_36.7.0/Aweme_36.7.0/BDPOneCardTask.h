@class NSString, NSMutableDictionary, NSDictionary, BDLynxView, UIView, BDPLynxErrorMonitor;
@protocol BDLOneCardViewProtocol;

@interface BDPOneCardTask : NSObject <BDLynxClientViewDelegate> {
    long long updateConut;
    long long errorCount;
    long long sizeChangeCount;
}

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSString *publishVersion;
@property (copy, nonatomic) NSString *developer_id;
@property (retain, nonatomic) NSMutableDictionary *customFields;
@property (nonatomic) double tempFectchStartTime;
@property (weak, nonatomic) BDLynxView *lynxView;
@property (weak, nonatomic) UIView<BDLOneCardViewProtocol> *view;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (retain, nonatomic) NSDictionary *componentDict;
@property (retain, nonatomic) BDPLynxErrorMonitor *errMonitor;
@property (copy, nonatomic) id /* block */ oneCardCompletion;
@property (copy, nonatomic) NSString *customID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidStartLoading;
- (void)viewDidFirstScreen;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidUpdate;
- (void)viewDidRecieveError:(id)a0;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)setupLynxView;
- (void)loadLynxView;
- (void)setupOneCardModel:(id)a0;
- (void)setupTask:(id)a0;
- (void)tracker:(id)a0 param:(id)a1;
- (void)registerComponentIfNeed;
- (id)initWithSchema:(id)a0 oneCardModel:(id)a1 options:(id)a2;
- (void).cxx_destruct;

@end
