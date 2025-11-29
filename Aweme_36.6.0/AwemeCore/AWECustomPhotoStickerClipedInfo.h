@class NSString, NSArray, NSDictionary;

@interface AWECustomPhotoStickerClipedInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *points;
@property (copy, nonatomic) NSDictionary *bbox;
@property (copy, nonatomic) NSArray *bboxList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boxRect;
- (BOOL)clipInfoValid;
- (void).cxx_destruct;

@end
