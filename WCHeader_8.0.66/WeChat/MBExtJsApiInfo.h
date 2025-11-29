@class NSString;

@interface MBExtJsApiInfo : NSObject

@property (nonatomic) BOOL isSync;
@property (nonatomic) BOOL isRunOnMainThread;
@property (retain, nonatomic) NSString *apiName;

- (id)init:(id)a0 sync:(BOOL)a1 mainThread:(BOOL)a2;
- (void).cxx_destruct;

@end
