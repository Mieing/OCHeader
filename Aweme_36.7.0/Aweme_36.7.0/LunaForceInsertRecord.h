@class NSString;

@interface LunaForceInsertRecord : NSObject <NSCoding>

@property (copy, nonatomic) NSString *trackID;
@property (nonatomic) double insertTimeMs;
@property (nonatomic) BOOL isNeedInsert;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
