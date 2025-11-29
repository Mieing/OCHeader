@class NSString;

@interface MMLSSessionItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *session;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned int msgCount;
@property (nonatomic) long long msgBeginTime;
@property (nonatomic) long long msgEndTime;
@property (nonatomic) unsigned int msgOldestTime;
@property (nonatomic) unsigned int msgNewestTime;

+ (BOOL)sessionItemCompareItem:(id)a0 withItem:(id)a1;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
