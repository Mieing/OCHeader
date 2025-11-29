@class NSArray, NSString;

@interface AWEVideoStickerSavePhotoInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *photoNames;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *waterMarkPath;
@property (nonatomic) BOOL shouldRemoveLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
