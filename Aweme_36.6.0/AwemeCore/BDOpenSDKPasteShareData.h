@class NSString;

@interface BDOpenSDKPasteShareData : NSObject <NSCoding>

@property (retain, nonatomic) NSString *bundle_id;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *secret;
@property (retain, nonatomic) NSString *unique_id;

- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
