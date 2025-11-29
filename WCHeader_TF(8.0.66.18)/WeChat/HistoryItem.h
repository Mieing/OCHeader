@class NSNumber;

@interface HistoryItem : NSObject <NSCoding>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSNumber *updateTime;
@property (retain, nonatomic) id dataValue;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
