@class NSString, BDPGameUserScopePopupConfig, NSArray;

@interface BDPGameUserScopeServerResult : NSObject

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL auth_popup;
@property (retain, nonatomic) BDPGameUserScopePopupConfig *popup_config;
@property (copy, nonatomic) NSArray *auth_records;

+ (id)modelWithJson:(id)a0;

- (id)parseAuthRecordToDic;
- (void).cxx_destruct;

@end
