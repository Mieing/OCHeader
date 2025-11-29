@class NSString, AWETeenIntroPageMinorAlbumStatusModel, AWEURLModel;

@interface AWETeenIntroPageMinorAlbumModel : MTLModel <MTLJSONSerializing, AWEMinorAlbumProtocol>

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *coverClip;
@property (retain, nonatomic) AWETeenIntroPageMinorAlbumStatusModel *status;
@property (nonatomic) long long source;
@property (nonatomic) unsigned long long fakeAlbumType;
@property (copy, nonatomic) NSString *pageToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)coverClipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
