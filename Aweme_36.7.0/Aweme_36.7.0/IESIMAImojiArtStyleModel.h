@class NSNumber, NSString;

@interface IESIMAImojiArtStyleModel : MTLModel <ACCAIEmojiStyleModelProtocol, MTLJSONSerializing, IESIMAIEmojiStyleModelProtocol>

@property (retain, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *strokeColor;
@property (copy, nonatomic) NSString *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *strokeColor;
@property (copy, nonatomic) NSString *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
