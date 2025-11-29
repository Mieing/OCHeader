@class NSString, AWEURLModel;

@interface ACCScanStickerModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *srcImage;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *species;
@property (copy, nonatomic) NSString *crop;
@property (nonatomic) long long cropIndex;
@property (copy, nonatomic) NSString *labelId;
@property (nonatomic) double prob;
@property (copy, nonatomic) NSString *wikiId;
@property (nonatomic) struct CGPoint { double x; double y; } stickerOirgin;
@property (retain, nonatomic) id scanEditResult;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (copy, nonatomic) NSString *tos_uri;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)srcImageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
