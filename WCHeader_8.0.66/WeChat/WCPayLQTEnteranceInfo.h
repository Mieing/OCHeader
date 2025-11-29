@class NSString;

@interface WCPayLQTEnteranceInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *lct_wording;
@property (nonatomic) unsigned int lqt_state;
@property (retain, nonatomic) NSString *lct_url;
@property (nonatomic) int is_show_cell;
@property (retain, nonatomic) NSString *cell_icon;
@property (nonatomic) int is_open_lqt;
@property (retain, nonatomic) NSString *lqt_open_url;
@property (retain, nonatomic) NSString *lqt_title;
@property (retain, nonatomic) NSString *lqt_wording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_lct_wording;
+ (void)PBArrayAdd_lqt_state;
+ (void)PBArrayAdd_lct_url;
+ (void)PBArrayAdd_is_show_cell;
+ (void)PBArrayAdd_cell_icon;
+ (void)PBArrayAdd_is_open_lqt;
+ (void)PBArrayAdd_lqt_open_url;
+ (void)PBArrayAdd_lqt_title;
+ (void)PBArrayAdd_lqt_wording;
+ (void)initialize;
+ (id)getLocalLQTEnteranceInfo;
+ (BOOL)saveLQTEnteranceInfo:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
