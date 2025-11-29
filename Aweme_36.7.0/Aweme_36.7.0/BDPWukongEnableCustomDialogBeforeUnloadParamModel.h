@class NSString, NSArray, NSNumber;

@interface BDPWukongEnableCustomDialogBeforeUnloadParamModel : BDPWukongModel <BDPWukongModelInterface>

@property (copy, nonatomic) NSString *cancelText;
@property (copy, nonatomic) NSString *confirmText;
@property (copy, nonatomic) NSArray *content;
@property (retain, nonatomic) NSNumber *hasMore;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)jsonSchemaDict;


@end
