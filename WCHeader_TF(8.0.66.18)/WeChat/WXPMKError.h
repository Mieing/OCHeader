@class NSError;

@interface WXPMKError : NSObject {
    NSError *error;
    BOOL consumed;
}

+ (void)consume:(id)a0;
+ (void)unconsume:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;

@end
