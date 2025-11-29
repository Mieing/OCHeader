@class NSLock, NSMutableDictionary, NSString;

@interface IESMMKeyFrameInfo : NSObject <KeyFrameOperationDelegate>

@property (retain, nonatomic) NSMutableDictionary *KeyFrameWrappDic;
@property (retain, nonatomic) NSLock *keyFrameInfoLock;
@property (nonatomic) BOOL isKeyFrameInfoNeedChang;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setkeyFrameInfo:(id)a0 withPts:(unsigned long long)a1;
- (void)removekeyFrameInfo:(unsigned long long)a0;
- (void)removeallKeyFrameInfo;
- (id)getKeyFrameInfo;
- (void)completeUpdateAllkeyFrames;
- (unsigned long long)getKeyFrameNum;
- (BOOL)needRefreshKeyFrame;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
