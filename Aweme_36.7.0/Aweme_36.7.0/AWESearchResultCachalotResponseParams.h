@class AWESearchCachalotNetworkStatus, AWESearchResultCachalotDataResponse, NSString, AWESearchCachalotHarmfulModel, NSError, NSDictionary, AWESearchCachalotLoginModel, AWESearchCachalotFrequencyModel;

@interface AWESearchResultCachalotResponseParams : NSObject

@property (nonatomic) BOOL requestSuccess;
@property (nonatomic) BOOL isEmpty;
@property (retain, nonatomic) AWESearchCachalotLoginModel *loginModel;
@property (retain, nonatomic) AWESearchCachalotFrequencyModel *frequencyModel;
@property (retain, nonatomic) AWESearchCachalotHarmfulModel *harmfulModel;
@property (nonatomic) BOOL isCancel;
@property (retain, nonatomic) AWESearchCachalotNetworkStatus *networkStatus;
@property (copy, nonatomic) NSDictionary *containerData;
@property (copy, nonatomic) id /* block */ innerDataChangedBlock;
@property (copy, nonatomic) id /* block */ outerDataChangedBlock;
@property (retain, nonatomic) AWESearchResultCachalotDataResponse *response;
@property (copy, nonatomic) NSString *sessionSearchId;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double requestTS;
@property (nonatomic) BOOL isFromStream;

- (void).cxx_destruct;

@end
