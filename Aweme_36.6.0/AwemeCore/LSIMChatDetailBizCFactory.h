@class NSString;

@interface LSIMChatDetailBizCFactory : NSObject <LSListCellAndVMFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createKOLModelsCacheIfNeeded;
+ (id)createKOLModelsCacheIfNeeded;
+ (void)createModelsCacheIfNeeded;
+ (id)cellAndVMModelFromBaseMessageModel:(id)a0;
+ (id)bulletTemplateModelWithMessage:(id)a0;
+ (id)findCellAndVMModelWithOriginDict:(id)a0 withKey:(id)a1;
+ (id)bulletCellAndVMModelFromMessage:(id)a0;
+ (id)bulletCardReuseIDWithCardType:(id)a0;
+ (id)cellVMWithCellModel:(id)a0;
+ (id)registerCellAndVMModels;


@end
