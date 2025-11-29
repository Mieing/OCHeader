@class UILabel, NSDictionary, NSString;

@interface BDSHDownloadComponent : BDSHViewComponent

@property (retain, nonatomic) UILabel *labelView;
@property (nonatomic) double fontSize;
@property (nonatomic) double fontWeight;
@property (copy, nonatomic) NSDictionary *businessData;
@property (copy, nonatomic) NSDictionary *componentData;
@property (copy, nonatomic) NSDictionary *appInfo;
@property (copy, nonatomic) NSDictionary *adInfo;
@property (copy, nonatomic) NSString *processedOpenUrl;
@property (nonatomic) long long startRenderTime;

- (id)p_commonParams;
- (void)updateWithRenderNode:(void *)a0 engine:(id)a1;
- (void)updateRenderWithType:(int)a0 value:(const void *)a1;
- (void)updateRenderData;
- (void)p_setupDownloadEventWithValue:(void *)a0;
- (void)p_downloadEvent;
- (void)p_setupBasicInfo;
- (BOOL)p_isLiveType;
- (id)p_livePrams;
- (void)p_callBridgeWithName:(id)a0 params:(id)a1;
- (BOOL)p_useAtp;
- (void)p_sendMannorEventWithType:(id)a0 event:(id)a1 params:(id)a2;
- (void)p_sendClickAdLogWithParams:(id)a0;
- (id)p_addTimeWithParams:(id)a0;
- (BOOL)p_isDownloadType;
- (id)p_wrapAdLogWithParams:(id)a0;
- (void).cxx_destruct;
- (id)contentView;
- (id)p_typeString;

@end
