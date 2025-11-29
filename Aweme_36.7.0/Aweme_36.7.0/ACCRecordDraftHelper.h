@interface ACCRecordDraftHelper : NSObject

+ (void)updatePropModelWithRepository:(id)a0 usingEffectModel:(id)a1;
+ (void)saveBackupWithRepository:(id)a0 completion:(id /* block */)a1;
+ (void)saveBackupWithRepository:(id)a0;
+ (void)saveBackupWithPublishModel:(id)a0 video:(id)a1;

@end
