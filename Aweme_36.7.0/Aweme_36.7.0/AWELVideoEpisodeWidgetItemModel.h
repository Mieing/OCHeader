@class NSString;

@interface AWELVideoEpisodeWidgetItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long offset;
@property (nonatomic) long long duration;
@property (nonatomic) long long widgetType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
