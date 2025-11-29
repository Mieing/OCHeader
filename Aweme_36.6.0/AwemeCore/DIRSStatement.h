@class NSString;

@interface DIRSStatement : NSObject

@property long long useCount;
@property (retain) NSString *query;
@property void *statement;
@property BOOL inUse;

- (void)close;
- (void).cxx_destruct;
- (id)description;
- (void)reset;
- (void)dealloc;

@end
