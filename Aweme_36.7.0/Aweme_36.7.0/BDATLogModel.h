@class NSString, NSNumber;

@interface BDATLogModel : NSObject

@property (retain, nonatomic) NSString *rit;
@property (retain, nonatomic) NSString *reqId;
@property (retain, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSNumber *urlSize;

+ (id)logModelWithEvent:(id)a0 label:(id)a1 cid:(id)a2 logExtra:(id)a3 urlSize:(id)a4;

- (BOOL)isSameKey:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
