@class NSString;

@interface WCAdInteractionCoverInfo : NSObject <NSCoding>

@property (nonatomic) long long coverType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long actionStartTime;
@property (nonatomic) unsigned long long actionEndTime;
@property (nonatomic) unsigned long long coverStartTime;
@property (nonatomic) unsigned long long coverEndTime;
@property (retain, nonatomic) NSString *themePAGUrl;
@property (retain, nonatomic) NSString *themePAGMD5;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
