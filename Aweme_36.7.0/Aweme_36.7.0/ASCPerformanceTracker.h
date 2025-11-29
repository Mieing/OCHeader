@class NSString, NSMutableDictionary;

@interface ASCPerformanceTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *map;
@property (readonly, copy, nonatomic) NSString *creationID;

- (id)trackParams;
- (id)initWithCreationID:(id)a0;
- (void)nodeBegin:(id)a0;
- (void)nodeEnd:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
