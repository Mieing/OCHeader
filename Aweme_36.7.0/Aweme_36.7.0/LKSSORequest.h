@class NSArray, NSString;

@interface LKSSORequest : NSObject {
    void /* unknown type, empty encoding */ scope;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
    void /* unknown type, empty encoding */ $__lazy_storage_$_codeVerifier;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ server;
@property (nonatomic) void /* unknown type, empty encoding */ useChallengeCode;
@property (nonatomic, copy) NSArray *scope;
@property (nonatomic, readonly) NSString *description;

+ (id)feishu;
+ (id)lark;

- (id)initWithServer:(long long)a0 scope:(id)a1 useChallengeCode:(BOOL)a2;
- (id)initWithServer:(long long)a0 scope:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
