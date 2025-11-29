@class NSString, NSTextAttachment, NSDictionary, NSData, NSAttributedString;

@interface ALPAttributedStringOperation : NSObject <NSCopying>

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) unsigned long long operationType;
@property (nonatomic) unsigned long long contentType;
@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) NSTextAttachment *attachment;
@property (copy, nonatomic) NSAttributedString *attrString;
@property (nonatomic) BOOL isFullString;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSDictionary *documentAttrs;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSDictionary *options;

+ (id)operationInitWithString:(id)a0 attributes:(id)a1;
+ (id)operationInitWithAttachment:(id)a0 attributes:(id)a1;
+ (id)operationInitWithData:(id)a0 options:(id)a1 documentAttrs:(id)a2;
+ (id)operationAppendWithAttributedString:(id)a0;
+ (id)operationModifyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1 attributes:(id)a2 isFullString:(BOOL)a3;
+ (id)operationInsertWithAttributedString:(id)a0 atIndex:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
