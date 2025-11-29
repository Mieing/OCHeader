@class NSString;

@interface WCAdScanInfo : NSObject <NSCoding>

@property (retain, nonatomic) NSString *bgView;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *detectSucIcon;
@property (retain, nonatomic) NSString *descIcon;
@property (nonatomic) int scanGestureType;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)valid;
- (id)fetchAllImageUrls;
- (void).cxx_destruct;

@end
