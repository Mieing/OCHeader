@class NSArray, NSString, _TtC30IESIMModelLayerNetworkProvider27CodeGenIMShowinfov2ReqModel, NSNumber, _TtC30IESIMModelLayerNetworkProvider27CodeGenIMDynamicbtnReqModel;

@interface IESIMModelLayerNetworkProvider.CodeGenIMBtnconfv2ReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ hit;
    void /* function */ sortName;
    void /* function */ id;
    void /* function */ exitConfigs;
    void /* function */ dynamicBiz;
}

@property (nonatomic, retain) NSNumber *priority;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider27CodeGenIMShowinfov2ReqModel *defaultModel;
@property (nonatomic, copy) NSArray *hit;
@property (nonatomic, retain) NSNumber *type;
@property (nonatomic, copy) NSString *sortName;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider27CodeGenIMDynamicbtnReqModel *dynamicBtn;
@property (nonatomic, retain) NSNumber *priorityv2;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, retain) NSNumber *operation;
@property (nonatomic, retain) NSNumber *selectMode;
@property (nonatomic, retain) NSNumber *clickRefreshMode;
@property (nonatomic, copy) NSArray *exitConfigs;
@property (nonatomic, copy) NSString *dynamicBiz;
@property (nonatomic, retain) NSNumber *dynamicKeepOnFailure;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
