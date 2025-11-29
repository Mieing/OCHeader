@class NSString, NSDictionary, MMUILabel;

@interface WAJSApiBanInfoToast : WABaseInfoToast {
    NSDictionary *m_jsApiNameMap;
    MMUILabel *m_noticeLabel;
}

@property (copy, nonatomic) NSString *jsapiName;

- (id)init;
- (void)initToastView;
- (void)initJsApiNameMap;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
