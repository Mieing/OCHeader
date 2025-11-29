@class NSString, NSDictionary, AWEAwemeModel, UIResponder;

@interface AWEPOIEntryAnchorViewContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) id player;
@property (copy, nonatomic) NSDictionary *contextDict;
@property (weak, nonatomic) id poiPlayInteractionVCManager;
@property (weak, nonatomic) UIResponder *btmResponder;
@property (copy, nonatomic) NSString *btm;
@property (copy, nonatomic) NSString *btmStandData;

- (void).cxx_destruct;

@end
