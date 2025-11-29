@class NSString, NSDictionary, AWEAwemeModel, NSMutableSet;

@interface AWEIMShareContactListDataFetchContext : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *sharePanelScene;
@property (copy, nonatomic) NSDictionary *extraDic;
@property (retain, nonatomic) NSMutableSet *abnormalList;
@property (nonatomic) BOOL abnormalDatabase;

- (void).cxx_destruct;

@end
