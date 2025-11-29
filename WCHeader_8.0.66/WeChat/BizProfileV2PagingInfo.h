@class NSData;

@interface BizProfileV2PagingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *offset;
@property (nonatomic) unsigned int isEnd;

+ (void)initialize;

- (void)setIsEnd:(unsigned int)a0;
- (unsigned int)isEnd;
- (void)setOffset:(id)a0;
- (id)offset;

@end
