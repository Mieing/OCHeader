@class NSString;

@interface FavTag : WXPBGeneratedMessage

@property (nonatomic) unsigned int tagId;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned int isDeleted;
@property (nonatomic) unsigned int seq;

+ (void)initialize;

- (void)setSeq:(unsigned int)a0;
- (unsigned int)seq;
- (void)setIsDeleted:(unsigned int)a0;
- (unsigned int)isDeleted;
- (void)setName:(id)a0;
- (id)name;
- (void)setTagId:(unsigned int)a0;
- (unsigned int)tagId;

@end
