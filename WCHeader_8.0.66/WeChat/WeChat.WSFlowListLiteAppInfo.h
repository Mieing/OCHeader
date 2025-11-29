@class NSString, NSDictionary;

@interface WeChat.WSFlowListLiteAppInfo : NSObject {
    void /* unknown type, empty encoding */ liteAppId;
    void /* unknown type, empty encoding */ liteAppPath;
    void /* unknown type, empty encoding */ liteAppParam;
    void /* unknown type, empty encoding */ contentUrl;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ nickname;
}

@property (nonatomic, copy) NSString *liteAppId;
@property (nonatomic, copy) NSString *liteAppPath;
@property (nonatomic, copy) NSDictionary *liteAppParam;
@property (nonatomic, copy) NSString *contentUrl;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *nickname;

- (id)init;
- (void).cxx_destruct;

@end
