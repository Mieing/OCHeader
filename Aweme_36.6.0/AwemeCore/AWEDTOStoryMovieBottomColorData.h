@class NSString;

@interface AWEDTOStoryMovieBottomColorData : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long topColor;
@property (nonatomic) long long middleColor;
@property (nonatomic) long long bottomColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
