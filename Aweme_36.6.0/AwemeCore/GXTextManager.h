@class UIFont, NSDictionary, NSMutableAttributedString, NSMutableArray;

@interface GXTextManager : NSObject

@property (copy, nonatomic) NSDictionary *textData;
@property (copy, nonatomic) NSDictionary *attribute;
@property (retain, nonatomic) UIFont *globalFont;
@property (retain, nonatomic) NSMutableAttributedString *attriString;
@property (retain, nonatomic) NSMutableArray *tags;
@property (copy, nonatomic) id /* block */ imageLoadCompletionBlock;
@property (copy, nonatomic) id /* block */ textClickedBlock;

- (id)gx_attributeStringWithDic:(id)a0 attribute:(id)a1 imageLoadCompletionBlock:(id /* block */)a2 textClickedBlock:(id /* block */)a3;
- (void)applyRange:(id)a0;
- (id)generateAttachmentListWithImageDatas:(id)a0;
- (id)generateAttachmentListWithTagDatas:(id)a0;
- (id)sortAndJoinImageAttachment:(id)a0 tagAttachment:(id)a1;
- (void)applyAttachment:(id)a0 isUpdate:(BOOL)a1;
- (id)generateAttachmentWithImageData:(id)a0;
- (void)loadImageWithImageData:(id)a0;
- (void).cxx_destruct;

@end
