@class NSString, AWEListDataController;
@protocol AWERelatedRecommendListBaseDataControllerProtocol;

@interface AWERelatedRecommendDataControllerManager : NSObject {
    void /* function */ itemID;
    void /* unknown type, empty encoding */ coverOriginResolution;
}

@property (class, nonatomic, readonly) AWERelatedRecommendDataControllerManager *sharedInstance;

@property (nonatomic, retain) AWEListDataController<AWERelatedRecommendListBaseDataControllerProtocol> *outerDataController;
@property (nonatomic, copy) NSString *itemID;

- (id)getDataControllerWithModel:(id)a0 isDataNoDiff:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
