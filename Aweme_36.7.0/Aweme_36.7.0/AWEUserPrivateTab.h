@class NSString;

@interface AWEUserPrivateTab : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showPrivateTab;
@property (nonatomic) long long privateTabStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
