@class NSString;

@interface AWELiveAcqPlayTogetherLiveStreamEventModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *tag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
