@class NSString, NSDictionary, AWEAwemeModel;

@interface AWERichFullPageContextBridgeModel : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logExtraDict;

- (void).cxx_destruct;

@end
