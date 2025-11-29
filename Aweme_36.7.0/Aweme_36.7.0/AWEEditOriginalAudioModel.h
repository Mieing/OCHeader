@class NSString, NSNumber;

@interface AWEEditOriginalAudioModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *vID;
@property (copy, nonatomic) NSString *volume;
@property (retain, nonatomic) NSNumber *isUpdateSlidesVID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
