@class NSString;

@interface PuzzleForestAdapter : NSObject <PuzzleForestAdapterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)providePuzzleForestAdapterProtocol:(id)a0;

- (id)addCommonParamsForCDNMultiVersionURLString:(id)a0;
- (BOOL)isCDNMultiVersionResource:(id)a0;
- (void)addDefaultCDNMultiVersionDomains:(id)a0;

@end
