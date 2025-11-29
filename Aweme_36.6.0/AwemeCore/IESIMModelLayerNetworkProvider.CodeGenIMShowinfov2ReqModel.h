@class NSString, NSArray, NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenIMShowinfov2ReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ resource;
    void /* function */ display;
    void /* function */ notice;
    void /* function */ resourceDark;
    void /* function */ resourceConfigList;
    void /* function */ id;
    void /* function */ titleColor;
    void /* function */ titleColorDark;
    void /* function */ backgroundColor;
    void /* function */ backgroundColorDark;
    void /* function */ titleColorWithBackgroundImage;
    void /* function */ titleColorDarkWithBackgroundImage;
    void /* function */ backgroundColorWithBackgroundImage;
    void /* function */ backgroundColorDarkWithBackgroundImage;
}

@property (nonatomic, copy) NSString *resource;
@property (nonatomic, copy) NSString *display;
@property (nonatomic, copy) NSString *notice;
@property (nonatomic, copy) NSString *resourceDark;
@property (nonatomic, copy) NSArray *resourceConfigList;
@property (nonatomic, retain) NSNumber *startTime;
@property (nonatomic, retain) NSNumber *endTime;
@property (nonatomic, copy) NSString *id;
@property (nonatomic, retain) NSNumber *operation;
@property (nonatomic, copy) NSString *titleColor;
@property (nonatomic, copy) NSString *titleColorDark;
@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, copy) NSString *backgroundColorDark;
@property (nonatomic, copy) NSString *titleColorWithBackgroundImage;
@property (nonatomic, copy) NSString *titleColorDarkWithBackgroundImage;
@property (nonatomic, copy) NSString *backgroundColorWithBackgroundImage;
@property (nonatomic, copy) NSString *backgroundColorDarkWithBackgroundImage;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
