@class NSString;

@interface AWEPublishCreateModelParamTextOnImageProvider : NSObject <AWEPublishCreateModelParamProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishRequestParams:(id)a0 context:(id)a1;
- (id)textOnImageParams:(id)a0;
- (id)effectCaptionParams:(id)a0;

@end
