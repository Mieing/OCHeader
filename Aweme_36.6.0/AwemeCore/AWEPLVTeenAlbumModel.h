@class NSString, AWEURLModel;
@protocol AWEMinorAlbumStatusProtocol;

@interface AWEPLVTeenAlbumModel : MTLModel <MTLJSONSerializing, AWEMinorAlbumProtocol>

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) id<AWEMinorAlbumStatusProtocol> status;
@property (nonatomic) long long source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
