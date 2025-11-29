@class NSString, AWEMinorAlbumLabel, AWEMinorAlbumStatus, AWEMinorXiGuaExtraInfoModel, AWEURLModel;

@interface AWEMinorAlbum : MTLModel <MTLJSONSerializing, AWEMinorAlbumProtocol>

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEMinorAlbumStatus *status;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *coverAutoGen;
@property (retain, nonatomic) AWEURLModel *coverDynamic;
@property (retain, nonatomic) AWEURLModel *coverClip;
@property (retain, nonatomic) AWEMinorAlbumLabel *albumLabel;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) long long orientation;
@property (nonatomic) long long source;
@property (retain, nonatomic) AWEMinorXiGuaExtraInfoModel *xiguaExtraInfo;
@property (nonatomic) long long collectStatus;
@property (nonatomic) unsigned long long fakeAlbumType;
@property (copy, nonatomic) NSString *pageToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverUrlJSONTransformer;
+ (id)statusJSONTransformer;
+ (id)coverAutoGenJSONTransformer;
+ (id)coverDynamicJSONTransformer;
+ (id)coverClipJSONTransformer;
+ (id)albumLabelJSONTransformer;
+ (id)xiguaExtraInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isFromXiguaVideo;
- (void).cxx_destruct;
- (BOOL)isLandscape;

@end
