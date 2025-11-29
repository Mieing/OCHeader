@class WCHardLinkMergeOperation, NSString;

@interface WCHardLinkService : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) WCHardLinkMergeOperation *mergeOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getRelatedMemoryKV;
+ (BOOL)getStateOfHardLinkDone;
+ (void)setStateOfHardLinkDone:(BOOL)a0;
+ (void)setCurrentLink:(id)a0 with:(id)a1;
+ (void)removeLinkInfo;
+ (id)getBeLinkedInfo;
+ (id)getLinkToInfo;

- (void)dealloc;
- (void)tryToHardLinkSameFile;
- (void).cxx_destruct;

@end
