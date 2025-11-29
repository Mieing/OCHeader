@class NSString;

@interface AWELeftSideBarShowPopViewTask : NSObject

@property (readonly, copy, nonatomic) NSString *businessID;
@property (readonly, copy, nonatomic) NSString *businessSubID;
@property (readonly, copy, nonatomic) NSString *popViewContent;
@property (readonly, nonatomic) double taskLifePeriod;
@property (readonly, nonatomic) double taskCreateTime;
@property (nonatomic) BOOL isExecuting;

- (id)initWithBusinessID:(id)a0 businessSubID:(id)a1 popViewContent:(id)a2 taskLifePeriod:(double)a3;
- (BOOL)canExecute;
- (void).cxx_destruct;
- (id)description;

@end
