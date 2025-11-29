@class NSString;

@interface AWEECPhotoSearchLynxPreloadCellConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long cellCount;
@property (retain, nonatomic) NSString *cardName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
