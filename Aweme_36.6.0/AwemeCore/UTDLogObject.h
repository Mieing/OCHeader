@class NSString, NSData;

@interface UTDLogObject : NSObject

@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSData *content;
@property (nonatomic) long long time;
@property (readonly, nonatomic) unsigned long long rowID;

- (void)setRowID2:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)description;

@end
