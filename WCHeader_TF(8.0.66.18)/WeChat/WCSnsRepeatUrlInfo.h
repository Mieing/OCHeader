@class NSString, WCSnsMenuItem;

@interface WCSnsRepeatUrlInfo : MMObject <PBCoding>

@property (retain, nonatomic) NSString *layerId;
@property (retain, nonatomic) NSString *expId;
@property (retain, nonatomic) WCSnsMenuItem *menuItem;
@property (retain, nonatomic) NSString *docId;
@property (retain, nonatomic) NSString *extData;
@property (nonatomic) BOOL isShowMenuItem;
@property (nonatomic) unsigned int invalidTime;
@property (nonatomic) BOOL isMpUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_layerId;
+ (void)PBArrayAdd_expId;
+ (void)PBArrayAdd_menuItem;
+ (void)PBArrayAdd_docId;
+ (void)PBArrayAdd_extData;
+ (void)PBArrayAdd_isShowMenuItem;
+ (void)PBArrayAdd_invalidTime;
+ (void)PBArrayAdd_isMpUrl;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)parseRepeatUrlInfo:(id)a0;
- (BOOL)shouldClientHideUrlAfterConfirm;
- (void).cxx_destruct;

@end
