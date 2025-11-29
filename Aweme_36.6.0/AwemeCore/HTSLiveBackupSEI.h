@class NSString, NSMutableArray;

@interface HTSLiveBackupSEI : IESLivePBBaseMessage

@property (nonatomic) long long pts;
@property (retain, nonatomic) NSMutableArray *seiKeyListArray;
@property (readonly, nonatomic) unsigned long long seiKeyListArray_Count;
@property (copy, nonatomic) NSString *sei;
@property (nonatomic) long long seiIndex;
@property (nonatomic) BOOL keyFrameOnly;

+ (id)descriptor;

@end
