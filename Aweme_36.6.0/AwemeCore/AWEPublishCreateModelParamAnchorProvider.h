@class NSString;

@interface AWEPublishCreateModelParamAnchorProvider : NSObject <AWEPublishCreateModelParamProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishRequestParams:(id)a0 context:(id)a1;
- (long long)checkRequestItemTypeWithContext:(id)a0;

@end
