@class NSString, NSMutableString, NSMutableDictionary, NSMutableArray;

@interface TTEpubParagraphElement : NSObject {
    void *paragraph_;
}

@property (nonatomic) void *rc;
@property (retain, nonatomic) NSMutableArray *media_idx_vec;
@property (retain, nonatomic) NSMutableArray *elements;
@property (readonly, copy, nonatomic) NSString *tag;
@property (readonly, nonatomic) NSMutableString *content;
@property (readonly, nonatomic) NSMutableDictionary *attributes;
@property (nonatomic) int p_idx;
@property (nonatomic) unsigned long long tomato_text_type;

- (void)insertAttachmentBegin:(id)a0 EnableSpace:(BOOL)a1;
- (void)insertAttachmentEnd:(id)a0 EnableSpace:(BOOL)a1;
- (int)getMediaCount;
- (id)getMediaIdx:(int)a0;
- (void)insertAttachmentBegin:(id)a0;
- (void)insertAttachmentEnd:(id)a0;
- (void)removeAllInsertAttachment;
- (void).cxx_destruct;
- (id)initWith:(void *)a0;
- (id)getElements;

@end
