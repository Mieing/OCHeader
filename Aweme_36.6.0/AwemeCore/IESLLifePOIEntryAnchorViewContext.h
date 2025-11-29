@class NSString, NSDictionary;

@interface IESLLifePOIEntryAnchorViewContext : NSObject

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (weak, nonatomic) id player;
@property (copy, nonatomic) NSDictionary *contextDict;
@property (retain, nonatomic) id poiPlayInteractionVCManager;

- (void).cxx_destruct;

@end
