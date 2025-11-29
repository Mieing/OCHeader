@class NSString;

@interface AWEShowProgrammeTabModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showProgramTab;
@property (nonatomic) long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
