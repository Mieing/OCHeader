@class NSString, NSMutableArray;

@interface AnnieX.RedirectAppSettingsData : NSObject {
    void /* function */ config_url;
}

@property (nonatomic, copy) NSString *config_url;
@property (nonatomic) long long poll_interval;
@property (nonatomic, retain) NSMutableArray *android_redirect_in_cur_route_white_list;

- (id)initWithConfig_url:(id)a0 poll_interval:(long long)a1 android_redirect_in_cur_route_white_list:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
