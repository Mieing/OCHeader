@interface IESGCPFileManageUtil : NSObject

+ (id)IESGCPGetUserCachesPath;
+ (id)IESGCPSaveData:(id)a0 ToPath:(id)a1 fileName:(id)a2;
+ (BOOL)IESGCPRemoveCacheDataFromPath:(id)a0;
+ (id)IESGCPGetDataFromPath:(id)a0;

@end
