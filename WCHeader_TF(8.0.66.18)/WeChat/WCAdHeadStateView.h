@class WCDataItem, WCAdHeadStateInfo, NSString, WCAdURLImageView;

@interface WCAdHeadStateView : MMUIView <IWCAdHeadStateExt>

@property (retain, nonatomic) WCAdURLImageView *headStateImageView;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (retain, nonatomic) WCAdHeadStateInfo *stateInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataItem:(id)a0 stateInfo:(id)a1;
- (void)setupUI;
- (void)updateHeadState;
- (void)dealloc;
- (void)onAdHeadReadStateChanged;
- (void).cxx_destruct;

@end
