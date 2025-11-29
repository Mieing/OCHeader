@class NSString, NSNumber;

@interface IESLLLiveShelfCardListItemCardDataImageInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *webUri;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
