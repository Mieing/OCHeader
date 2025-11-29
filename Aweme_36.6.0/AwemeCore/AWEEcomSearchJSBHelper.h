@class NSMutableArray;

@interface AWEEcomSearchJSBHelper : NSObject

@property (retain, nonatomic) NSMutableArray *stackArray;
@property (nonatomic) unsigned long long lastSearchPageType;

+ (id)sharedHelper;

- (void)pushPage:(unsigned long long)a0;
- (unsigned long long)pop;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)init;
- (unsigned long long)top;

@end
