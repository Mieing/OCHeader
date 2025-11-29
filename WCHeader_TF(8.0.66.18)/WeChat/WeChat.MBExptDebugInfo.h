@class NSString;

@interface WeChat.MBExptDebugInfo : NSObject {
    void /* unknown type, empty encoding */ isDebugMode;
    void /* unknown type, empty encoding */ shouldUseVConsole;
    void /* unknown type, empty encoding */ debugType;
    void /* unknown type, empty encoding */ devUin;
    void /* unknown type, empty encoding */ debugAppID;
}

@property (nonatomic, readonly) NSString *description;

+ (id)fromExptWithExptKey:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
