@class NSString, NSMutableDictionary, NSMutableSet, NSDictionary;

@interface AWELeftSideBarLifeModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *hasShowTrackMap;
@property (retain, nonatomic) NSMutableSet *hasShownModuleIDPosSet;
@property (retain, nonatomic) NSMutableDictionary *hasTrackSubtitleMap;
@property (retain, nonatomic) NSMutableDictionary *hasTrackBarRedDotMap;
@property (copy, nonatomic) NSString *enterReferString;
@property (nonatomic) long long openTimeStamp;
@property (nonatomic) long long clickOrder;
@property (copy, nonatomic) NSString *entranceStatus;
@property (copy, nonatomic) NSString *schemaBusinessId;
@property (copy, nonatomic) NSDictionary *schemaParams;
@property (nonatomic) long long dataSource;
@property (nonatomic) BOOL hasScroll;
@property (copy, nonatomic) NSDictionary *reopenParams;

- (void).cxx_destruct;
- (id)init;

@end
