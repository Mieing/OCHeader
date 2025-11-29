@class NSString, AWEProfileContext, AWEUserProfileEventCommonParamsHandler, AWEProfileMixDataManager, AWEListDataController;
@protocol AWEDiscoverDPlayletProfileListDataControllerProtocol;

@interface AWEProfileMixCollectionViewCellConfig : NSObject

@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) AWEUserProfileEventCommonParamsHandler *eventCommonParamsHandler;
@property (retain, nonatomic) AWEListDataController *playletDataController;
@property (retain, nonatomic) AWEListDataController<AWEDiscoverDPlayletProfileListDataControllerProtocol> *seriesContentSubTypeDataController;
@property (retain, nonatomic) AWEProfileMixDataManager *dataManager;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) double padding;
@property (nonatomic) BOOL fromHome;
@property (weak, nonatomic) AWEProfileContext *profileContext;

- (void).cxx_destruct;

@end
