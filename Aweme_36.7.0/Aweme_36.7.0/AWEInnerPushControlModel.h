@class NSString, AWEInnerPushUiInfoModel, NSArray, NSDictionary, AWEInnerPushExemptInfoModel;

@interface AWEInnerPushControlModel : NSObject

@property (copy, nonatomic) NSString *group;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *templateTag;
@property (nonatomic) long long priority;
@property (retain, nonatomic) AWEInnerPushUiInfoModel *uiInfoModel;
@property (retain, nonatomic) AWEInnerPushExemptInfoModel *exemptInfoModel;
@property (copy, nonatomic) NSArray *exitRuleArray;
@property (readonly, nonatomic) NSDictionary *serverTrackExt;

- (BOOL)isInInnerPushPlatformExperiment;
- (id)initWithExtraStrParams:(id)a0;
- (id)p_serverTrackExtFromExtraParams:(id)a0;
- (void).cxx_destruct;

@end
