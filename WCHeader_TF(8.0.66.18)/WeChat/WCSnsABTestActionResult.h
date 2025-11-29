@class NSString, NSMutableArray;

@interface WCSnsABTestActionResult : NSObject {
    NSMutableArray *arrTipActionResult;
}

@property (nonatomic) unsigned int experType;
@property (retain, nonatomic) NSString *dataItemId;
@property (nonatomic) unsigned int startTime;
@property (nonatomic) unsigned int endTime;

- (id)init;
- (void)resetResult;
- (id)genActionResult;
- (BOOL)hasActionResult;
- (void)tryAddTimeStamp:(BOOL)a0 endTime:(BOOL)a1;
- (void)addTipActionResult:(id)a0;
- (void).cxx_destruct;

@end
