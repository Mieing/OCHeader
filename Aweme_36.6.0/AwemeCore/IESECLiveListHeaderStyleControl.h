@class NSString;

@interface IESECLiveListHeaderStyleControl : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long headerLayoutStyle;
@property (nonatomic) long long browseStyle;
@property (nonatomic) long long tabStyle;
@property (nonatomic) double entryInnerSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
