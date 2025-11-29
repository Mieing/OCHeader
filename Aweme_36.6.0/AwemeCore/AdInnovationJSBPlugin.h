@class AdInnovationManager, NSArray, NSString;

@interface AdInnovationJSBPlugin : NSObject <BUPlayableAdJSBPlugin>

@property (weak, nonatomic) AdInnovationManager *innovationAd;
@property (copy, nonatomic) NSArray *methodList;
@property (copy, nonatomic) id /* block */ sendEventBlock;
@property (copy, nonatomic) NSString *prefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bupl_sendAdLogWithParam:(id)a0;
- (id)bupl_feed_visible_statusWithParam:(id)a0;
- (id)bupl_setVisibleWithParam:(id)a0;
- (id)bupl_getSelfPositionWithParam:(id)a0;
- (id)bupl_closeWithParam:(id)a0;
- (id)bupl_appInfoWithParam:(id)a0;
- (id)bupl_userConvertWithParam:(id)a0;
- (id)bupl_showNativeInfoAreaWithParam:(id)a0;
- (id)bupl_hideNativeInfoAreaWithParam:(id)a0;
- (id)bupl_getViewPositionInfoWithParam:(id)a0;
- (id)bupl_notificationWithParam:(id)a0;
- (void).cxx_destruct;

@end
