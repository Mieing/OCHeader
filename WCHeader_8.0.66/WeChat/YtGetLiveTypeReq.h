@class NSString, NSDictionary;

@interface YtGetLiveTypeReq : JSONModel

@property (retain, nonatomic) NSString *app_id;
@property (retain, nonatomic) NSString *business_id;
@property (retain, nonatomic) NSString *person_id;
@property (retain, nonatomic) NSString *session_id;
@property (nonatomic) int platform;
@property (retain, nonatomic) NSDictionary *select_data;

- (void).cxx_destruct;

@end
