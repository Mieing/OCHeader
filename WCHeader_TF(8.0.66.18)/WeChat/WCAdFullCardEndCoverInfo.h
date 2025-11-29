@class NSString;

@interface WCAdFullCardEndCoverInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleImageUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *actionTitle;
@property (retain, nonatomic) NSString *ambientImageUrl;
@property (nonatomic) unsigned long long endCoverEndTime;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;

@end
