@class NSString;

@interface SECHostTrieResolver : NSObject <SECURLWildcard>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)partsOfTarget:(id)a0;

@end
