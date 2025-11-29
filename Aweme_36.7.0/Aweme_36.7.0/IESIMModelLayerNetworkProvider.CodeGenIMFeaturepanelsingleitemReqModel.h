@class _TtC30IESIMModelLayerNetworkProvider34CodeGenIMFeaturepanelbadgeReqModel, NSString, NSArray, _TtC30IESIMModelLayerNetworkProvider37CodeGenIMFeaturepaneliconringReqModel, _TtC30IESIMModelLayerNetworkProvider44CodeGenIMFeaturepanelfeaturesettingsReqModel, NSNumber, _TtC30IESIMModelLayerNetworkProvider43CodeGenIMFeaturepanelfeaturedynamicReqModel;

@interface IESIMModelLayerNetworkProvider.CodeGenIMFeaturepanelsingleitemReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ key;
    void /* function */ title;
    void /* function */ titleParams;
    void /* function */ descriptionString;
    void /* function */ descriptionParams;
    void /* function */ icon;
    void /* function */ titleTextColorLight;
    void /* function */ titleTextColorDark;
    void /* function */ subtitleTextColorLight;
    void /* function */ subtitleTextColorDark;
    void /* function */ backgroundColorLight;
    void /* function */ backgroundColorDark;
    void /* function */ exitSettings;
}

@property (nonatomic, retain) NSNumber *operation;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *titleParams;
@property (nonatomic, copy) NSString *descriptionString;
@property (nonatomic, copy) NSArray *descriptionParams;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *titleTextColorLight;
@property (nonatomic, copy) NSString *titleTextColorDark;
@property (nonatomic, copy) NSString *subtitleTextColorLight;
@property (nonatomic, copy) NSString *subtitleTextColorDark;
@property (nonatomic, copy) NSString *backgroundColorLight;
@property (nonatomic, copy) NSString *backgroundColorDark;
@property (nonatomic, retain) NSNumber *priority;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider37CodeGenIMFeaturepaneliconringReqModel *iconRing;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider44CodeGenIMFeaturepanelfeaturesettingsReqModel *feature;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider43CodeGenIMFeaturepanelfeaturedynamicReqModel *dynamic;
@property (nonatomic, copy) NSArray *exitSettings;
@property (nonatomic, retain) _TtC30IESIMModelLayerNetworkProvider34CodeGenIMFeaturepanelbadgeReqModel *badge;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
