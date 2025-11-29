@class NSString, AWEPrivacyStateObserveModel;

@interface AWEPrivacyStateObserveResponse : AWESocialRelationResponse

@property (retain, nonatomic) NSString *userID;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEPrivacyStateObserveModel *observeModel;

- (void).cxx_destruct;

@end
