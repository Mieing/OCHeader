@class NSString;

@interface AffCgiRequest_AffCgiInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int cmdid;
@property (retain, nonatomic) NSString *url;

+ (void)initialize;

- (void)setUrl:(id)a0;
- (id)url;
- (void)setCmdid:(unsigned int)a0;
- (unsigned int)cmdid;

@end
