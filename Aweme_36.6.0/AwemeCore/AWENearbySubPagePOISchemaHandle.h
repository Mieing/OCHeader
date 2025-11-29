@class NSString;

@interface AWENearbySubPagePOISchemaHandle : NSObject <AWENearbySubPageSchemaHandleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canHandleWith:(id)a0;
- (id)updatePageWithOriginSchema:(id)a0 hightPercent:(double)a1 subpageModel:(id)a2;

@end
