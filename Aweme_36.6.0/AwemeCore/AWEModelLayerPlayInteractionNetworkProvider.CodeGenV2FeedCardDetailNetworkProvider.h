@class NSNumber, NSString;

@interface AWEModelLayerPlayInteractionNetworkProvider.CodeGenV2FeedCardDetailNetworkProvider : AWEDataLayerRootModelGetMethodNetworkProvider {
    void /* function */ bizId;
    void /* function */ notifyExtra;
}

@property (nonatomic, retain) NSNumber *cardId;
@property (nonatomic, copy) NSString *bizId;
@property (nonatomic, retain) NSNumber *notifyType;
@property (nonatomic, copy) NSString *notifyExtra;
@property (nonatomic, retain) NSNumber *awemeId;
@property (nonatomic, retain) NSNumber *isEnterFront;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (void).cxx_destruct;
- (id)init;
- (Class)modelClass;

@end
