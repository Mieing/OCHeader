@class NSNumber, NSArray, NSString;

@interface IESInfoStickerResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy) NSArray *stickerList;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stickerListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)appendAndUpdateDataWithResponseModel:(id)a0;
- (void).cxx_destruct;

@end
