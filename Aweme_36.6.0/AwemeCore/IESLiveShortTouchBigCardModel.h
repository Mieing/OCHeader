@class NSString;

@interface IESLiveShortTouchBigCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bigCardURL;
@property (nonatomic) int containerType;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
