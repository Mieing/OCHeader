@class NSMutableDictionary, NSDictionary, AWEAwemeModel, NSString, NSNumber, UIViewController;

@interface AWEAdOrderCenterPopViewControlManager : HTSService <AWEAdOrderCenterPopViewControlManager>

@property (nonatomic) BOOL isPopTips;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSMutableDictionary *confirmDic;
@property (copy, nonatomic) NSDictionary *wechatInfo;
@property (copy, nonatomic) NSDictionary *webURLInfo;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIViewController *popViewController;
@property (copy, nonatomic) NSDictionary *controlDict;
@property (copy, nonatomic) NSDictionary *appstoreInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)popupOrderCenterWindowIfNeedWith:(id)a0 and:(id)a1;

- (id)getControlInfoWith:(id)a0;
- (void)updateControInfo:(id)a0;
- (void)resetPopViewInfoWith:(id)a0;
- (void)resetPopTipInfoWith:(id)a0;
- (void)recordOpenWechatInfo:(id)a0 and:(id)a1;
- (void)recordOpenOtherApp:(id)a0;
- (id)getOpenWechatInfo;
- (id)getOpenOtherAppInfo;
- (void)recordWeakTipsIsPop:(BOOL)a0 with:(id)a1;
- (BOOL)getIsPopWeakTips:(id)a0;
- (id)getControlInfoTupleInSql:(id)a0;
- (id)analysisControlInfoWithDic:(id)a0;
- (void)updateControInfoInSqlWithTuple:(id)a0;
- (id)getPopTipsInfo;
- (id)getPopupViewInfo;
- (id)getPopupControlInfo;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
