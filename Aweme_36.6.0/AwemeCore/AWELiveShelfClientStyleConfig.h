@class NSNumber, NSString, AWELiveShelfBackgroundConfig;

@interface AWELiveShelfClientStyleConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELiveShelfBackgroundConfig *backgroundConfig;
@property (retain, nonatomic) NSNumber *firstScreenCardNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
