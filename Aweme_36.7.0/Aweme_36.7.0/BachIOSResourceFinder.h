@class NSString;

@interface BachIOSResourceFinder : NSObject <NSObject>

@property BOOL isDestroyed;
@property int finderType;
@property void *finder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)destroy;

@end
