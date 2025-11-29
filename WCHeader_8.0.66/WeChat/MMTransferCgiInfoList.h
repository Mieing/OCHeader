@class NSMutableArray;

@interface MMTransferCgiInfoList : WXPBGeneratedMessage

@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *cgiInfo;

+ (void)initialize;

- (void)setCgiInfo:(id)a0;
- (id)cgiInfo;
- (void)setCount:(unsigned int)a0;
- (unsigned int)count;

@end
