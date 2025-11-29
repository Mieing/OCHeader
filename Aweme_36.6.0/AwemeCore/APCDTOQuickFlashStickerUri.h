@class NSString, NSArray;

@interface APCDTOQuickFlashStickerUri : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userUri;
@property (copy, nonatomic) NSArray *urlList;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
