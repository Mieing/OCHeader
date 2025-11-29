@class NSString, NSDictionary;

@interface IESLLPOIHeaderContentCrushRankModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *badgeBackgroundImageUrl;
@property (copy, nonatomic) NSString *badgeImageUrl;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL backgroundBlur;
@property (copy, nonatomic) NSDictionary *actionParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (void).cxx_destruct;

@end
