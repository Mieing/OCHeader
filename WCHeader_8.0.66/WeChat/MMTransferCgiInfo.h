@class NSString;

@interface MMTransferCgiInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *scope;
@property (nonatomic) unsigned int cgiId;
@property (retain, nonatomic) NSString *cgiUrl;
@property (retain, nonatomic) NSString *cgiPath;
@property (retain, nonatomic) NSString *cgiName;

+ (void)initialize;

- (void)setCgiName:(id)a0;
- (id)cgiName;
- (void)setCgiPath:(id)a0;
- (id)cgiPath;
- (void)setCgiUrl:(id)a0;
- (id)cgiUrl;
- (void)setCgiId:(unsigned int)a0;
- (unsigned int)cgiId;
- (void)setScope:(id)a0;
- (id)scope;

@end
