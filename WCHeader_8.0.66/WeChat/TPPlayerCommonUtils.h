@class NSDictionary, NSMutableDictionary;

@interface TPPlayerCommonUtils : NSObject {
    NSMutableDictionary *_businessIDNames;
    NSDictionary *_seekTypeNames;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)makeBusinessIDName:(long long)a0;
- (id)makeSeekTypeName:(long long)a0;
- (void).cxx_destruct;

@end
