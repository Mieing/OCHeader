@class NSMutableDictionary;

@interface AWELeftSideBarAppPresenterActionContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionContextDict;
@property (retain, nonatomic) NSMutableDictionary *appDataDict;
@property (retain, nonatomic) NSMutableDictionary *highValueDict;

- (void)updateByDataAppModel:(id)a0;
- (id)initWithDataAppModel:(id)a0;
- (id)getReportSidebarUseInfo;
- (void).cxx_destruct;
- (id)contextForKey:(id)a0;

@end
