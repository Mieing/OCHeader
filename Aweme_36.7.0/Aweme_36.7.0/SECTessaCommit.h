@class NSString, NSDictionary;
@protocol SECTessa, SECTessaSample;

@interface SECTessaCommit : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<SECTessaSample> sample;
@property (copy, nonatomic) NSString *tessaType;
@property (retain, nonatomic) id<SECTessa> tessa;
@property (copy, nonatomic) NSDictionary *changes;
@property (retain, nonatomic) id<SECTessa> diff;
@property (nonatomic) long long versionNo;
@property (copy, nonatomic) NSString *changeType;

+ (id)commitWithItem:(id)a0;
+ (id)commitWithNewItem:(id)a0 toBase:(id)a1;
+ (id)reAlignCommit:(id)a0 WithBase:(id)a1;

- (void)mergeCommit:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)props;

@end
