@class NSString;

@interface AWEDTOGameModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isGame;
@property (nonatomic) long long type;
@property (nonatomic) long long score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
