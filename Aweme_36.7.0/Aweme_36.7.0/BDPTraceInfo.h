@class NSString, BDPUniqueID, NSMutableArray;

@interface BDPTraceInfo : NSObject

@property (copy, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *uniqueString;
@property (retain, nonatomic) NSMutableArray *points;

- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
