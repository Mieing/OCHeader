@class NSString;

@interface NetworkingMetaData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *v;
@property (retain, nonatomic) NSString *f;
@property (retain, nonatomic) NSString *c;
@property (nonatomic) BOOL preview;
@property (nonatomic) BOOL supportH265;
@property (nonatomic) int supportResolution;

+ (void)initialize;

@end
