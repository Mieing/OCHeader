@class NSString;

@interface AlibcTradeMiniSDKConvert : NSObject <AlibcTradeMiniSDKConvertService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (id)dictionaryToJson:(id)a0;
- (BOOL)isTaoBaoURLWithNarrow:(id)a0;
- (id)buildRequestParams:(id)a0 params:(id)a1;
- (void)utTrack:(id)a0 result:(id)a1;
- (void)convert:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (BOOL)isTaoBaoURLWithWide:(id)a0;

@end
