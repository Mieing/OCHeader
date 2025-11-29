@class NSString, CdnSnsTaskInfo, WCFImageKey;

@interface WCFImageTaskInfo : NSObject

@property (retain, nonatomic) CdnSnsTaskInfo *cdn;
@property (readonly, nonatomic) WCFImageKey *imageKey;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long feedMediaType;
@property (copy, nonatomic) NSString *tid;

- (id)initWithImageKey:(id)a0 cdnTask:(id)a1;
- (long long)type;
- (void).cxx_destruct;

@end
