@class NSString, NSArray, AWEURLModel;

@interface AWEGeneralPopupContentModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, nonatomic) AWEURLModel *image;
@property (readonly, copy, nonatomic) NSArray *buttons;
@property (readonly, copy, nonatomic) NSString *hint;
@property (readonly, copy, nonatomic) NSString *toast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageJSONTransformer;
+ (id)buttonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
