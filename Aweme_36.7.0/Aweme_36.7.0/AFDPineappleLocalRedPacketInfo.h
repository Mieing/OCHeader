@class NSString;

@interface AFDPineappleLocalRedPacketInfo : NSObject <NSCoding>

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) unsigned long long status;
@property (nonatomic) BOOL commented;
@property (nonatomic) BOOL autoOpened;

- (id)initWithAwemeID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
