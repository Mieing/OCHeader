@class NSMutableArray;

@interface AWECFLoadManager : NSObject {
    NSMutableArray *_versions;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id)current;
- (void)add:(id)a0;

@end
