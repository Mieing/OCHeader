@class NSString, NSNumber;

@interface IESIMModelLayerNetworkProvider.CodeGenIMExitsettingsReqModel : AWENetworkProviderBaseRequestModel {
    void /* function */ prefix;
    void /* function */ identifier;
    void /* function */ dimension;
    void /* function */ exitscope;
}

@property (nonatomic, copy) NSString *prefix;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSNumber *exitdays;
@property (nonatomic, retain) NSNumber *threshold;
@property (nonatomic, copy) NSString *dimension;
@property (nonatomic, copy) NSString *exitscope;

- (id)toJSONDictionary;
- (void).cxx_destruct;
- (id)init;

@end
