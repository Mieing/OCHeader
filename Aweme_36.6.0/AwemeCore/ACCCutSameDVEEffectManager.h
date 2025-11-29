@class NSString;

@interface ACCCutSameDVEEffectManager : NSObject <DVEffectDownloadDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestForBinaryWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 progress:(id *)a6 callback:(id /* block */)a7;

@end
