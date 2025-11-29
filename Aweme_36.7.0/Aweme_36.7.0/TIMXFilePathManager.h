@class NSString, TIMXSDKInstance;

@interface TIMXFilePathManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain) NSString *p_publicDataPathCache;
@property (retain) NSString *p_privateDataPathCache;
@property (retain) NSString *p_workplacePathCache;
@property (retain) NSString *p_chatFileFolderPathCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)chatFileFolderForUser:(long long)a0;
- (id)chatFileFolder;
- (id)chatFileFolderCommon;
- (id)publicDataPath;
- (id)privateDataPath;
- (id)workplacePath;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
