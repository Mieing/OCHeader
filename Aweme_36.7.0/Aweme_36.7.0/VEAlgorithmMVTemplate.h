@class NSString, NSArray;

@interface VEAlgorithmMVTemplate : NSObject

@property (nonatomic) long long templateId;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *expr;
@property (copy, nonatomic) NSString *zipUrl;
@property (nonatomic) BOOL isCommon;
@property (nonatomic) unsigned long long source;
@property (retain, nonatomic) NSArray *videoSegs;

- (void).cxx_destruct;

@end
