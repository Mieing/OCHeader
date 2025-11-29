@class NSString;

@interface QDBStatement : NSObject

@property (retain) NSString *query;
@property void *statement;
@property BOOL inUse;

- (void)dealloc;
- (void)close;
- (void)reset;
- (void).cxx_destruct;

@end
