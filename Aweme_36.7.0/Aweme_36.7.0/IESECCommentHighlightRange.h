@class NSNumber, NSString;

@interface IESECCommentHighlightRange : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *location;
@property (retain, nonatomic) NSNumber *length;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidWithTotalSize:(unsigned long long)a0;
- (void).cxx_destruct;

@end
