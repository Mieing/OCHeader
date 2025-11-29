@class NSMutableDictionary, NSMutableSet;

@interface MMLiveCommentDataDictCache : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *commentDataItemDict;
@property (retain, nonatomic) NSMutableSet *invalidComments;

- (void)cacheCommentDataItems:(id)a0;
- (void)clearAllCommentDataItemCache;
- (void)clearCommentDataItemCache:(id)a0;
- (BOOL)updateCommentSeq:(unsigned long long)a0 withLocalClientMsgId:(id)a1;
- (void)updateCommentSeqByOwnSeq;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getCommentDataItemWithSeq:(unsigned long long)a0;
- (id)getCommentDataItemWithLocalCliMsgId:(id)a0;
- (unsigned long long)getCommentDataItemCount;
- (void).cxx_destruct;

@end
