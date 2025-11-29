@class NSString;

@interface IESECTextMargin : MTLModel <MTLJSONSerializing>

@property (nonatomic) double topMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double bottomMargin;
@property (nonatomic) double leftMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
