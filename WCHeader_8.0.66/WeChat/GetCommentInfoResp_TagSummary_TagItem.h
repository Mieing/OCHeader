@class NSString;

@interface GetCommentInfoResp_TagSummary_TagItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tagId;
@property (retain, nonatomic) NSString *tagDesc;
@property (nonatomic) unsigned int tagCnt;

+ (void)initialize;

- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTagItem:(id)a0;
- (unsigned long long)hash;

@end
