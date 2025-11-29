@class NSString;

@interface AFDFeedAlbumTextFoldConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double fromRatio;
@property (nonatomic) double toRatio;
@property (nonatomic) BOOL allowFold;
@property (nonatomic) double ratioThreshold;
@property (nonatomic) long long maxLineCount;
@property (nonatomic) long long minLineCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
