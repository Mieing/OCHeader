@interface BDPCutLossesUtil : NSObject

+ (BOOL)isSceneMatch:(id)a0 sceneStrategy:(unsigned long long)a1 launchFrom:(id)a2 entranceForm:(id)a3 errorCallback:(id /* block */)a4;
+ (id)deviceIDWithUniqueID:(id)a0;
+ (unsigned long long)hashSumWithIssueID:(id)a0 deviceID:(id)a1;
+ (BOOL)isValidSceneOpType:(unsigned long long)a0;
+ (BOOL)isSceneDetailMatch:(id)a0 scene:(id)a1;

@end
