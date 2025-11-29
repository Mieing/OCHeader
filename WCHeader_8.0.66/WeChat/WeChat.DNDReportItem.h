@class NSString;

@interface WeChat.DNDReportItem : NSObject {
    void /* unknown type, empty encoding */ scene;
    void /* unknown type, empty encoding */ chatName;
    void /* unknown type, empty encoding */ toUserName;
    void /* unknown type, empty encoding */ toTextStateID;
    void /* unknown type, empty encoding */ role;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ exposedSet;
}

@property (nonatomic, copy) NSString *chatName;
@property (nonatomic, copy) NSString *toUserName;
@property (nonatomic, copy) NSString *toTextStateID;

- (id)initWithScene:(long long)a0;
- (void)reportExposed;
- (id)init;
- (void).cxx_destruct;

@end
