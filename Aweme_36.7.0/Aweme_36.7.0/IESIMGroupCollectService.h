@interface IESIMGroupCollectService : NSObject <IESIMGroupCollectServiceInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableGroupCollectValue;
    void /* unknown type, empty encoding */ _friendsAlbumService;
    void /* unknown type, empty encoding */ _toastService;
    void /* unknown type, empty encoding */ _ownerABService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_supportInChatContentMessageTypes;
}

- (long long)groupPreviewMediaStyleWithCon:(id)a0;
- (BOOL)isSupportPreviewMediaNewStyleWithMessage:(id)a0;
- (void)addCollectWithCid:(id)a0 serverMessageId:(long long)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)removeCollectWithCid:(id)a0 mediaId:(id)a1 fileId:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (long long)groupCollectStateForMessage:(id)a0;
- (id)groupCollectMessageExtStateKey;
- (id)groupCollectMessageExtMediaIDKey;
- (BOOL)hasEntrancePermissionForCon:(id)a0;
- (BOOL)hasRemovePermissionForCon:(id)a0 message:(id)a1 assetModel:(id)a2 fileModel:(id)a3;
- (BOOL)enableGroupCollect;
- (BOOL)isSupportGroupCollectWithMessage:(id)a0;
- (BOOL)isSupportGroupCollectWithCon:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
