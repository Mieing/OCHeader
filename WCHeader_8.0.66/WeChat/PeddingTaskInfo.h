@class BizShareInfo, CContact;

@interface PeddingTaskInfo : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) BizShareInfo *shareInfo;
@property (retain, nonatomic) CContact *contact;

- (id)initWithType:(long long)a0 shareInfo:(id)a1 contact:(id)a2;
- (void)printInfo;
- (void).cxx_destruct;

@end
