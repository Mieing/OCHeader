@class NSString;

@interface BDByteCastPPResolutionCmd : BDByteCastPPCmd

@property (copy, nonatomic) NSString *urlType;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long resolutionMode;

+ (id)cmd;

- (void).cxx_destruct;

@end
