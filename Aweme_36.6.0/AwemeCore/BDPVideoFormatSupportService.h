@class BDPThreadSafeArray, NSString;

@interface BDPVideoFormatSupportService : NSObject <BDPVideoFormatSupportService>

@property (nonatomic) long long state;
@property (nonatomic) BOOL canUseH265;
@property (retain, nonatomic) BDPThreadSafeArray *supportCompletions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)supportH265Format:(id /* block */)a0 uniqueID:(id)a1;
- (void)_requestH265FormatSupport:(id)a0;
- (void)_h265responseHandle:(BOOL)a0 canUse:(BOOL)a1 errMsg:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
