@class NSArray, NSString;

@interface AWEDTOSavePhotoPropData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *savePhotos;
@property (copy, nonatomic) NSString *toastText;
@property (copy, nonatomic) NSString *waterMarkPath;
@property (nonatomic) BOOL shouldRemoveLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
