@class NSString;

@interface AWEDemaciaFoundationAdapter : NSObject <AWEDemaciaFoundationProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)awe_systemFontOfSize:(double)a0 weight:(long long)a1;
- (id)awe_systemFontOfSize:(double)a0;
- (BOOL)enablePlayerBashVideo;
- (BOOL)enablePlayerCheckHijack;
- (BOOL)getABTestCaseWithPropertyName:(id)a0;
- (id)localVideoStorageURLWithAwemeID:(id)a0 awemeModel:(id)a1 videoURI:(id)a2;
- (void)setView:(id)a0 rtlType:(unsigned long long)a1;
- (id)AWEColorConstTextInverse;
- (id)AWEColorConstTextInverse2;

@end
