@class NSArray;

@interface AWENetworkServiceLog : NSObject

@property (retain, nonatomic) NSArray *whiteArray;

+ (id)sharedInstance;

- (void)networkLogForURLString:(id)a0 response:(id)a1 jsonObj:(id)a2 error:(id)a3;
- (id)dictionaryToString:(id)a0;
- (BOOL)needLogResponseBody:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
