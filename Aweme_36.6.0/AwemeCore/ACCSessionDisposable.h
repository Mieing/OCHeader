@class NSString, NSMutableArray;

@interface ACCSessionDisposable : NSObject <ACCSessionDisposableProtocol>

@property (copy, nonatomic) NSMutableArray *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addDisposable:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
