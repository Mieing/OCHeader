@class NSString;

@interface AFDFeedAlbumImageLayoutConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double fromRatio;
@property (nonatomic) double toRatio;
@property (nonatomic) unsigned long long topInsetType;
@property (nonatomic) unsigned long long heightType;
@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) double imageTopInset;
@property (nonatomic) double textTopInset;
@property (nonatomic) unsigned long long textTopInsetType;
@property (nonatomic) long long maxLineCountUnderPic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentModeJSONTransformer;
+ (id)topInsetTypeJSONTransformer;
+ (id)heightTypeJSONTransformer;
+ (id)textTopInsetTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
