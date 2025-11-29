@class NSDictionary;

@interface IESECShopTabElementPerfInfo : NSObject

@property (nonatomic) unsigned long long tabType;
@property (nonatomic) double t_tab_container_ready;
@property (nonatomic) double t_page_show;
@property (nonatomic) double t_page_show_async;
@property (nonatomic) double req_xtab_start;
@property (nonatomic) double req_xtab_end;
@property (nonatomic) double t_tab_click;
@property (retain, nonatomic) NSDictionary *metric;
@property (retain, nonatomic) NSDictionary *category;
@property (retain, nonatomic) NSDictionary *filterParams;

- (void).cxx_destruct;
- (id)init;

@end
