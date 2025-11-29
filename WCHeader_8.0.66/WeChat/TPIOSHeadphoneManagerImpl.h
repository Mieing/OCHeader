@class NSString, NSMutableArray;

@interface TPIOSHeadphoneManagerImpl : NSObject <ITPHeadphoneManagerImpl>

@property (retain, nonatomic) NSMutableArray *delegateArray;
@property (nonatomic) BOOL initialized;
@property (readonly, nonatomic) BOOL headphoneOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)startInternal;
- (void)stopInternal;
- (void)audioRouteDidChangeFrom:(long long)a0 to:(long long)a1;
- (BOOL)headphoneOn;
- (void).cxx_destruct;

@end
