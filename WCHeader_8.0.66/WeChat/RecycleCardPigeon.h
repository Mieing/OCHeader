@class NSString, NSNumber;

@interface RecycleCardPigeon : NSObject

@property (copy, nonatomic) NSString *extra_data;
@property (retain, nonatomic) NSNumber *clientmsgid;
@property (retain, nonatomic) NSNumber *flag;
@property (copy, nonatomic) NSString *report_data;
@property (copy, nonatomic) NSString *clientmsgidStr;

+ (id)makeWithExtra_data:(id)a0 clientmsgid:(id)a1 flag:(id)a2 report_data:(id)a3 clientmsgidStr:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
