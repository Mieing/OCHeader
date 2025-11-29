@class NSString, NSArray, NSDictionary;

@interface IESIMHotspotRecommendGroupModel : NSObject <IESIMGroupHotspotViewModelProtocol> {
    void /* unknown type, empty encoding */ rawModel;
    void /* function */ modelID;
    void /* function */ title;
    void /* function */ link;
    void /* function */ groupList;
    void /* function */ extra;
    void /* function */ trackingExt;
}

@property (nonatomic, copy) NSString *modelID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *link;
@property (nonatomic, copy) NSArray *groupList;
@property (nonatomic, copy) NSDictionary *extra;
@property (nonatomic, copy) NSDictionary *trackingExt;

- (void).cxx_destruct;
- (id)init;

@end
