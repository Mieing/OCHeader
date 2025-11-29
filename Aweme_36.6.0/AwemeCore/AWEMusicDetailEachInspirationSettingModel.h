@class NSString, NSNumber;

@interface AWEMusicDetailEachInspirationSettingModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *inspirationType;
@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) NSString *buttonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
