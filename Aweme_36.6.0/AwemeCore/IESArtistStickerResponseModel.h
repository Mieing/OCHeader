@class NSString, NSArray;

@interface IESArtistStickerResponseModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly, nonatomic) long long cursor;
@property (readonly, nonatomic) BOOL hasMore;
@property (readonly, nonatomic) NSArray *stickerList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
