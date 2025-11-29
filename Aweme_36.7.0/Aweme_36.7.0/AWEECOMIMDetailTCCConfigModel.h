@class NSString, NSDictionary;

@interface AWEECOMIMDetailTCCConfigModel : NSObject

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSDictionary *userDataDict;
@property (copy, nonatomic) NSDictionary *netDataDict;
@property (nonatomic) BOOL hasLoadUserDataDict;

- (BOOL)enableNewReport;
- (BOOL)enableMsgLongClick;
- (id)initWithUserId:(id)a0 pigeonBizType:(id)a1;
- (void)updateWithTCCNetDataDict:(id)a0;
- (BOOL)enableDynamicAreaOptimze;
- (void)storeUserDataDict:(id)a0;
- (void)tryLoadUserDataDict;
- (id)userDataDictKey;
- (id)userDataDictKeyList;
- (id)sendGoodsDict;
- (id)changeBottomIconDict;
- (void).cxx_destruct;

@end
