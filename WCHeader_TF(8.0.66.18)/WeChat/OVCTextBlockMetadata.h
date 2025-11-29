@class NSString;

@interface OVCTextBlockMetadata : NSObject

@property (readonly, nonatomic) NSString *textBlockID;
@property (readonly, nonatomic) unsigned long long textBlockType;
@property (readonly, nonatomic) NSString *textBlockName;
@property (readonly, nonatomic) NSString *textBlockContent;
@property (readonly, nonatomic) NSString *textBlockText;
@property (readonly, nonatomic) BOOL isUsingPlaceholder;
@property (readonly, nonatomic) BOOL isEditable;
@property (readonly, nonatomic) NSString *defaultContent;
@property (readonly, nonatomic) NSString *placeholder;

- (id)initWithTextBlockID:(id)a0 textBlockType:(unsigned long long)a1 textBlockName:(id)a2 textBlockContent:(id)a3 textBlockText:(id)a4 isUsingPlaceholder:(BOOL)a5 isEditable:(BOOL)a6 defaultContent:(id)a7 placeholder:(id)a8;
- (void).cxx_destruct;

@end
