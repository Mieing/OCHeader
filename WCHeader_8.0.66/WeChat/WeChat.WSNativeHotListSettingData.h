@class NSString;

@interface WeChat.WSNativeHotListSettingData : NSObject <MMListDiffable> {
    void /* unknown type, empty encoding */ pos;
    void /* unknown type, empty encoding */ canShow;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ session;
}

@property (nonatomic, copy) NSString *title;

- (void)reportClick;
- (id)diffIdentifier;
- (id)init;
- (void).cxx_destruct;

@end
