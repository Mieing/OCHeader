@class NSArray, NSString;

@interface AFDFeedAlbumLayoutAdjustConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) long long minTextLength;
@property (copy, nonatomic) NSArray *imageLayoutConfigs;
@property (copy, nonatomic) NSArray *textFoldConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageLayoutConfigsJSONTransformer;
+ (id)textFoldConfigsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
