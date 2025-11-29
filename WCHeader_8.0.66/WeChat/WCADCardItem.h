@class NSString;

@interface WCADCardItem : NSObject <NSCoding>

@property (retain, nonatomic) NSString *cardTpId;
@property (retain, nonatomic) NSString *cardExt;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
