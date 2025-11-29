@class NSString;

@interface YtRgbRequestJsonModel : JSONModel

@property (retain, nonatomic) NSString *app_id;
@property (nonatomic) int platform;
@property (retain, nonatomic) NSString *session_id;
@property (retain, nonatomic) NSString *machine;
@property (retain, nonatomic) NSString *systemName;
@property (retain, nonatomic) NSString *systemVersion;

- (void).cxx_destruct;

@end
