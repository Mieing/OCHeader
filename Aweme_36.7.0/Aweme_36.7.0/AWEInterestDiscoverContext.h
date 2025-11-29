@class NSString, AWEListDataController, AWEAwemeModel;

@interface AWEInterestDiscoverContext : AWEPageContext

@property (retain, nonatomic) AWEAwemeModel *fromModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (weak, nonatomic) AWEListDataController *dataController;

- (void)updateContextWithAwemeModel:(id)a0 referString:(id)a1 enterFrom:(id)a2 dataController:(id)a3;
- (void).cxx_destruct;

@end
