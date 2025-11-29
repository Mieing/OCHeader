@class NSArray, NSNumber, NSString;

@interface BDPWukongUpdateCustomDialogDataBeforeUnloadParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSArray *content;
@property (retain, nonatomic) NSNumber *hasMore;
@property (copy, nonatomic) NSString *pageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)jsonSchemaDict;


@end
