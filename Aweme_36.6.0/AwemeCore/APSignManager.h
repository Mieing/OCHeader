@class NSString;

@interface APSignManager : NSObject <APSignProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (int)initColorInfo:(int)a0;
- (id)preColorInfo:(int)a0 ext:(id)a1 error:(id *)a2;
- (id)getColorInfo:(int)a0 biz:(id)a1 param:(id)a2 ext:(id)a3 error:(id *)a4;
- (void)updateColorCode:(id)a0 code:(id)a1;
- (id)init;
- (int)getMode:(id)a0;

@end
