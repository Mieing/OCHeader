@class NSString;

@interface LSIMChatListBizCFactory : NSObject <LSListCellAndVMFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createModelsCacheIfNeeded;
+ (id)cellVMWithCellModel:(id)a0;
+ (id)registerCellAndVMModels;


@end
