@class NSString;

@interface AWEAntiAddictDailyAlertTitleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *primaryTitle;
@property (copy, nonatomic) NSString *secondaryTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithPrimaryTitle:(id)a0 secondaryTitle:(id)a1;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
