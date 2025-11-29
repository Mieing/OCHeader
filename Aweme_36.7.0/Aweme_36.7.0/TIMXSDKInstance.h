@class TIMXSingletonsPage, NSString, TIMXContext, TIMXConfig;

@interface TIMXSDKInstance : NSObject {
    TIMXSingletonsPage *_singletonsPage;
}

@property (copy, nonatomic) NSString *token;
@property (retain, nonatomic) TIMXConfig *config;
@property (retain, nonatomic) TIMXContext *context;
@property (readonly, nonatomic) TIMXSingletonsPage *singletonsPage_mirror;
@property (readonly, copy, nonatomic) TIMXConfig *config_copy;

- (void)p_generateToken;
- (void)p_bindConfig:(id)a0;
- (void)p_addToManager;
- (void)destory;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
